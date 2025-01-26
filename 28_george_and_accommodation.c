//ques - https://codeforces.com/problemset/problem/467/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,yes_count = 0,no_count = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int p,q;
        scanf("%d %d", &p, &q);
        if (q - p >= 2)
        {
            yes_count++;
        }
        
    }
    printf("%d", yes_count);
    
    return 0;
}