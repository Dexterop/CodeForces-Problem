#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int home[n], guest[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &home[i],&guest[i]);
    }
    
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && home[i] == guest[j]) {
                count++;
            }
        }
        
    }
    
    printf("%d\n", count);
    
    return 0;
}