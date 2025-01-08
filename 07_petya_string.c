// Question - https://codeforces.com/problemset/problem/112/A

#include <stdio.h>
#include <ctype.h>  // Required for tolower()
int main()
{
    char string1[100], string2[100];

    scanf("%s", &string1);
    scanf("%s", &string2);

    // Loop through each character of both strings
    for (int i = 0; string1[i] != '\0' && string2[i] != '\0'; i++) {
        // Convert both characters to lowercase
        char ch1 = tolower(string1[i]);
        char ch2 = tolower(string2[i]);
        
        // Compare the lowercase characters
        if (ch1 < ch2) {
            printf("-1\n");  // string1 is lexicographically smaller
            return 0;
        } else if (ch1 > ch2) {
            printf("1\n");   // string1 is lexicographically greater
            return 0;
        }
    }
    
    // If no difference was found, the strings are equal
    printf("0\n");  // strings are lexicographically equal
    
    return 0;
}