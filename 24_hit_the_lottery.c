#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int denominations(int n){
    int bills = 0;

    bills += n/100;
    n%= 100;

    bills += n/20;
    n%= 20;

    bills += n/10;
    n%= 10;

    bills += n/5;
    n%= 5;

    bills += n/1;
    n%= 1;

    return bills;
    
}


int main()
{
    int n;
    scanf("%d", &n);  
    printf("%d\n", denominations(n));
    return 0;
}