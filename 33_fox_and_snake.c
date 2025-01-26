//ques - https://codeforces.com/problemset/problem/510/A

#include <stdio.h>

void func(int n, int m) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            
            for (int j = 0; j < m; j++) {
                printf("#");
            }
        } else if (i % 4 == 1) {
            
            for (int j = 0; j < m - 1; j++) {
                printf(".");
            }
            printf("#");
        } else if (i % 4 == 3) {
            
            printf("#");
            for (int j = 1; j < m; j++) {
                printf(".");
            }
        }
        printf("\n"); 
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    func(n, m);
    return 0;
}
