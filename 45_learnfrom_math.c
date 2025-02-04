#include <stdio.h>

int is_composite(int x) {
    
    if (x <= 1) return 0; 
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 1; 
    }
    return 0; 
}

int main() {
    int n;
    
    
    scanf("%d", &n);
    
    
    for (int i = 4; i < n; i++) {
        if (is_composite(i) && is_composite(n - i)) {
            
            printf("%d %d\n", i, n - i);
            return 0;
        }
    }
    
    return 0;
}
