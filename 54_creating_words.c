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
        char a[4],b[4];
        scanf("%s %s",a,b);
    
        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        
        

        printf("%s %s\n",a,b);
    }
    

    return 0;
}