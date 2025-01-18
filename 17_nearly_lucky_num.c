#include <stdio.h>
int main()
{
    long long int n;
    int lucky_count = 0;

    scanf("%lld", &n);

    while (n > 0) {
        int digit = n % 10;  
        if (digit == 4 || digit == 7)
        {
            lucky_count++;
        }
        n = n / 10;  
    }
    if (lucky_count == 4 || lucky_count == 7)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}