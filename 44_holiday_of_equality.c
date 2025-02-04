#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int welfare[n];
    int high = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&welfare[i]);
    }

    int max_welfare = welfare[0];
    for (int i = 0; i < n; i++)
    {
        if (welfare[i] > max_welfare)
        {
            max_welfare=welfare[i];
        }
    }
    
    int total_cost = 0;
    for (int i = 0; i < n; i++)
    {
        total_cost +=(max_welfare - welfare[i]);
    }
    
    printf("%d\n", total_cost);
    
    return 0;
}