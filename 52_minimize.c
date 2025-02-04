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
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",b-a);
    }
    
    return 0;
}