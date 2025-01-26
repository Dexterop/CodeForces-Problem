// ques - https://codeforces.com/problemset/problem/705/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void func(int n){
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            printf("I hate"); 
        } else {
            printf("I love"); 
        }

        if (i < n) {
            printf(" that "); 
        } else {
            printf(" it"); 
        }
    }
    printf("\n"); 
}

int main()
{
    int n;
    scanf("%d",&n);
    func(n);
    return 0;
}