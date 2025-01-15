// Question - https://codeforces.com/problemset/problem/339/A

#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int c1 = 0, c2 = 0, c3 = 0;

    // Count the numbers
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '1') c1++;
        else if (s[i] == '2') c2++;
        else if (s[i] == '3') c3++;
    }

    // Print the sorted numbers
    int first = 1;
    while (c1--) {
        if (!first) printf("+");
        printf("1");
        first = 0;
    }
    while (c2--) {
        if (!first) printf("+");
        printf("2");
        first = 0;
    }
    while (c3--) {
        if (!first) printf("+");
        printf("3");
        first = 0;
    }
    printf("\n");

    return 0;
}
