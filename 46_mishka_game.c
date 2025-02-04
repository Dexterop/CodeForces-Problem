#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,m_count=0,c_count=0;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        int m,c;
        scanf("%d %d",&m,&c);

        if (m>c)
        {
            m_count++;
        }
        if (c>m)
        {
            c_count++;
        }
        
    }
    if (m_count > c_count)
        {
            printf("Mishka\n");
        }
    else if (c_count>m_count)
        {
            printf("Chris\n");
        }
    else{
        printf("Friendship is magic!^^\n");
    }
    return 0;
}
        