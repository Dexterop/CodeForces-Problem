//ques - https://codeforces.com/problemset/problem/344/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    char prevMagnet[100], currentMagnet[100];
    int groups = 1;

    scanf("%s", prevMagnet);

    for (int i = 1; i < n; i++)
    {
        scanf("%s", currentMagnet);
        if (strcmp(prevMagnet, currentMagnet) != 0) {
            groups++; 
        }
        strcpy(prevMagnet, currentMagnet); 
    }

    printf("%d\n", groups);
    
    
    return 0;
}