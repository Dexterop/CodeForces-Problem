#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,total_cubes=0,height=0;
    scanf("%d",&n);

    for (int i = 1; ; i++) {
        int required_cubes = (i * (i + 1)) / 2;

        if (total_cubes + required_cubes <= n) {
            total_cubes += required_cubes;
            height++;
        } else {
            break;
        }
    }

    printf("%d\n", height);
    return 0;
}