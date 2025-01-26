// ques - https://codeforces.com/problemset/problem/1535/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    int t;
    scanf("%d", &t); 

    for (int i = 0; i < t; i++)
    {
        int s[4];
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &s[j]); 
        }

        
        int max1 = -1, max2 = -1;

        
        for (int j = 0; j < 4; j++) {
            if (s[j] > max1) {
                max2 = max1;
                max1 = s[j];
            } else if (s[j] > max2) {
                max2 = s[j];
            }
        }

        
        if ((max1 == s[0] || max1 == s[1]) && (max2 == s[2] || max2 == s[3])) {
            printf("YES\n");
        } else if ((max1 == s[2] || max1 == s[3]) && (max2 == s[0] || max2 == s[1])) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
