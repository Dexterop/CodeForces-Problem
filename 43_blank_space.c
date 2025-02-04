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
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&arr[i]);
        }

        int longest_blank = 0;  
        int current_blank = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                current_blank++;  
                if (current_blank > longest_blank) {
                    longest_blank = current_blank;  
                }
            } 
            else {
                current_blank = 0;  
            }
        }

        
        printf("%d\n", longest_blank);
    }
    
        
    return 0;
}