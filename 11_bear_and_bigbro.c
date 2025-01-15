// question - "https://codeforces.com/problemset/problem/791/A"

#include <stdio.h>

int years_to_surpass(int a, int b) {
    int years = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }
    return years;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", years_to_surpass(a, b));
    return 0;
}
