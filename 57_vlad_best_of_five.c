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
        int a_count = 0,b_count = 0;
        char s[6];
        scanf("%s",s);
        for (int j = 0;s[j] != '\0'; j++)
        {
            if (s[j] == 'A')
            {
                a_count++;
            }
            if (s[j] == 'B')
            {
                b_count++;
            }
        }
        if (a_count > b_count)
        {
            printf("A\n");
        }
        if (b_count > a_count)
        {
            printf("B\n");
        }
        
        
    }
    
    return 0;
}