// ques - https://codeforces.com/problemset/problem/271/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int are_digits_distinct( int year){
    int digits[10] = {0};
    while (year > 0)
    {
        int digit = year % 10;
        if (digits[digit] > 0)
        {
            return 0;
        }
        digits[digit]++;
        year /= 10;
    }
    return 1;
}


int main()
{
    int y;
    scanf("%d", &y);

    while (1)
    {
        y++;
        if (are_digits_distinct(y))
        {
            printf("%d\n", y);
            break;
        }
        
    }
    
    return 0;
}
