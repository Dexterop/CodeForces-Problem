// ques - https://codeforces.com/problemset/problem/1772/A

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
        char expression[5];
        scanf("%s", expression);

        int a = expression[0] - '0';
        int b = expression[2] - '0';

        printf("%d\n", a+b);
    }
    
    return 0;
}