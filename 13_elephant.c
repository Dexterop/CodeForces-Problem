// question - "https://codeforces.com/problemset/problem/617/A"

#include <stdio.h>
int main() {
    int x, position = 0;
    scanf("%d", &x);

    position = x / 5;

    if (x % 5 != 0) {
        position++;
    }

    printf("%d\n", position);
    return 0;
}
