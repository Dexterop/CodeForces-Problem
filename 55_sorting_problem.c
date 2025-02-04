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
        int x,y;
        scanf("%d %d",&x,&y);
        if (x > y)
        {
            printf("%d %d\n",y,x);
        }
        else{
            printf("%d %d\n",x,y);

        }
    }
    
    return 0;
}