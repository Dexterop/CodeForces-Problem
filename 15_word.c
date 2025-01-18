// ques : https://codeforces.com/problemset/problem/59/A

#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[100];
    scanf("%s", &s);
    int lower_count = 0, upper_count = 0;

    for (int i = 0;s[i] != '\0'; i++)
    {
        if (islower(s[i]))
        {
            lower_count++;
        }
        else if (isupper(s[i]))
        {
            upper_count++;
        }
        
    }
    if (lower_count >= upper_count)
    {
        // Convert to lowercase
        for (int i = 0; s[i] != '\0'; i++) {
            s[i] = tolower(s[i]);
        }
    }
    else
    {
        // Convert to uppercase
        for (int i = 0; s[i] != '\0'; i++) {
            s[i] = toupper(s[i]);
        }
    }
    printf("%s\n", s);
    
    return 0;
}