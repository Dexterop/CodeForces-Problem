#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);

    char s[11];
    char s1[11]="codeforces";

    for (int i = 0; i < t; i++)
    {
        int count=0;
        scanf("%s",s);

        for (int j = 0; j < 10; j++)
        {
            if (s[j]!=s1[j])
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}