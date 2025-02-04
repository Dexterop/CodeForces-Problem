#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main()
{
    int t,a,b,x,ans = 0;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);
        
        // Two rectangles side by side or stacked
        int side1 = max(2 * a, b);
        int side2 = max(2 * b, a);
        int side3 = max(a, 2 * b);
        int side4 = max(b, 2 * a);
        
        // Minimal side length that can fit the two rectangles
        int side = side1;
        if (side2 < side) side = side2;
        if (side3 < side) side = side3;
        if (side4 < side) side = side4;
        
        // The area of the square
        int area = side * side;
        
        printf("%d\n", area);
    }
    
    return 0;
}