// ques - https://codeforces.com/problemset/problem/486/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void calculating_func(long long n){
    if (n%2 == 0)
    {
        printf("%lld",n / 2);
    }
    else{
        printf("%lld", -((n+1)/2));
    }
}

int main()
{
    long long n;
    scanf("%lld", &n);
    calculating_func(n);
    return 0;
}