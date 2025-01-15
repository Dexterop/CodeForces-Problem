// ques - "https://codeforces.com/contest/546/problem/A"

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int k,n,w , price= 0;
    scanf("%d %d %d", &k, &n, &w);

    for (int i = 1; i <= w ; i++)
    {
        price += k * i  ;
        
    }
    
    if (price > n) {
        printf("%d", price - n);
    } else {
        
        printf("0");
    }
    return 0;
}
