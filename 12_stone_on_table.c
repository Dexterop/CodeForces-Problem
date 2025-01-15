#include <stdio.h>
int main()
{
    
    int n;
    scanf("%d", &n);

    char color [n+1];
    scanf("%s", color);
    
    int removals = 0;
    for (int i = 0; i < n; i++)
    {
        if (color[i] == color[i + 1]) {
            removals++;
        }
    }
    printf("%d\n", removals);

    return 0;
}