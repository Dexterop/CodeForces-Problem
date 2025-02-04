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
        char str[]={"codeforces"};
        char c;
        scanf(" %c",&c);

        int found = 0;

        for (int j = 0;str[j] != '\0' ; j++)
        {
            if (str[j] == c)
            {
                found = 1;
                break;
            }
        }
            
        if (found)
        {
            printf("YES\n");
        }
        else 
        {
            printf("no\n");
        }
    }
            
    
    return 0;
}