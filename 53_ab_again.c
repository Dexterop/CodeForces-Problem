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
        int n;
        scanf("%d",&n);

        int ten =n /10;
        int units =n %10;
        printf("%d\n",ten + units); 
    }
    
    return 0;
}