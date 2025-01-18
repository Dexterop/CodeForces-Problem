// question - "https://codeforces.com/contest/2044/problem/A"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int count = 0;

        for (int b = 1; b < n; b++) {
            count++;
        }
        printf("%d\n", count);
    }
    
    return 0;
}