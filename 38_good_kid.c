// ques - https://codeforces.com/problemset/problem/1873/B

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t); 

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n); 

        int a[n]; 
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]); 
        }

        
        int min_index = 0; 
        for (int j = 1; j < n; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }

        
        a[min_index]++;

        
        long long product = 1; 
        for (int j = 0; j < n; j++)
        {
            product *= a[j];
        }

        
        printf("%lld\n", product);
    }

    

    return 0;
}
