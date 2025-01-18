// ques - "https://codeforces.com/problemset/problem/41/A"

#include <stdio.h>
#include <string.h>

int main()
{
    char s[101], t[101];
    
    
    scanf("%s %s", s, t);

    
    if (strcmp(s, strrev(t)) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
