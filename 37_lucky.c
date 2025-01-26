// ques - https://codeforces.com/problemset/problem/1676/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void lucky_or_not(char ticket[]) {
    int first_sum = 0, second_sum = 0;

    
    for (int i = 0; i < 3; i++) {
        first_sum += ticket[i] - '0'; // Convert character to integer
    }

    
    for (int i = 3; i < 6; i++) {
        second_sum += ticket[i] - '0'; 
    }

    
    if (first_sum == second_sum) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);

    
    for (int i = 0; i < t; i++) {
        char ticket[7]; 
        scanf("%s", ticket); 
        lucky_or_not(ticket); 
    }

    return 0;
}
