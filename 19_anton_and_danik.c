//ques - "https://codeforces.com/problemset/problem/734/A"

#include <stdio.h>
int main()
{
    int n, a_count=0 , d_count=0 ;
    scanf("%d",&n);

    char s[n];
    scanf("%s",s);
    
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A')
        {
            a_count++;
        }
        else if (s[i] == 'D')
        {
            d_count++;
        }
        
    }
    if (a_count > d_count)
    {
        printf("Anton");
    }
    else if (d_count > a_count)
    {
        printf("Danik");
    }
    
    else{
        printf("Friendship");
    }
    
    return 0;
}