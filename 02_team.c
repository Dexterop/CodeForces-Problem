#include <stdio.h>
int main()
{
    //n problems in total
    //n line contain 3 int = 0 or 1
    //if first num in line is 1 petya sure
    int n,p,v,t,count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d",&p,&v,&t);

        if (p + v + t >= 2)
        {
            count++;
        }
        
    }
    printf("%d\n", count);


    return 0;
}