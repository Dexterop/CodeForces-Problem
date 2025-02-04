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

        if (a!=b && a==c)
        {
            printf("%d\n",b);
        }
        if (b!=a && b==c)
        {
            printf("%d\n",a);
        }
        if (c!=a &&c!=b )
        {
            printf("%d\n",c);
        }
        
        
        
    }
    return 0;
}