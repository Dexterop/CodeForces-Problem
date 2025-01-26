// ques - https://codeforces.com/problemset/problem/1807/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void plusminus(int t){
    int a,b;
    signed int c;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if (a+b == c)
        {
            printf("+\n");
        }
        else if (a - b == c)
        {
            printf("-\n");
        }    
    }   
}

int main()
{
    int t;
    scanf("%d",&t);
    plusminus(t);
    return 0;
}