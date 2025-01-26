//ques - https://codeforces.com/problemset/problem/1742/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void func(int t){
    int a,b,c;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if (a + b == c || b + c == a || a + c == b)
        {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    
}

int main()
{
    int t;
    scanf("%d", &t);
    func(t);
    return 0;
}