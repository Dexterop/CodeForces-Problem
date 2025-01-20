// ques = https://codeforces.com/problemset/problem/1030/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);

    int is_hard = 0;

    for (int i = 0; i < n; i++)
    {
        int opinion;
        scanf("%d", &opinion);

        if (opinion == 1)
        {
            is_hard = 1;
        }
        
    }
    if (is_hard == 1)
    {
        printf("HARD\n");
    }
    else{
        printf("EASY\n");

    }
    return 0;
}