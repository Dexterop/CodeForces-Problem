// ques - https://codeforces.com/problemset/problem/1692/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void func(int t){
    int a,b,c,d,count=0;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &a,&b,&c,&d);
        count = 0;
        if (a<b)
        {
            count++;
        }
        if (a<c)
        {
            count++;
        }
        if (a<d)
        {
            count++;
        }    
    printf("%d\n",count); 
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    func(t);
    return 0;
}