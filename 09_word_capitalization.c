// Quetion - https://codeforces.com/problemset/problem/281/A

#include <stdio.h>
#include <ctype.h>  // For toupper
int main()
{
    char s[1000];
    fgets(s, sizeof(s), stdin);  // Read the string including spaces

    // Convert the first character to uppercase if it is lowercase
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] = toupper(s[0]);
    }

    printf("%s\n", s);
    return 0;
}