#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);

    if (n % 2 == 0)
    {
       printf("%d\n", n / 2);
       for (int i = 0; i < n/2; i++)
       {
            printf("2 ");
       }
        
    }
    else{
        printf("%d\n", n / 2);
        printf("3 ");
        for (int i = 0; i < (n - 3)/2; i++)
        {
            printf("2 ");
        }
        
    }
    return 0;
}