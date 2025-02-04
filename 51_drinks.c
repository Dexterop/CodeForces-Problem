#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    double sum =0;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        int p;
        scanf("%d",&p);
        sum +=p;
    }
    double result = sum /n;
    printf("%.12f",result);

    return 0;
}


