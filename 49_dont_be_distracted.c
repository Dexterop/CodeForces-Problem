#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n;
        scanf("%d",&n);

        char tasks[n+1];
        scanf("%s",tasks);

        int is_suspicious = 0;
        int visited[26] = {0};

        for (int i = 0; i < n; i++)
        {
            if (visited[tasks[i] - 'A'] && tasks[i] != tasks[i - 1])
            {
                is_suspicious = 1;
                break;
            }
            visited[tasks[i] - 'A'] = 1;
        }
        if (is_suspicious)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    
    return 0;
}