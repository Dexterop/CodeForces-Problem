#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);

        if ((a > b && a < c) || (a > c && a < b))
        {
            printf("%d\n", a);
        }
        else if ((b > a && b < c) || (b > c && b < a))
        {
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", c);
        }
        
    }
    
    return 0;
}