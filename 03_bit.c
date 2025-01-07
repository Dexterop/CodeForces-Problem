//https://codeforces.com/problemset/problem/282/A

#include <stdio.h>
#include <string.h>
int main()
{
    int n, X=0 ; // as per ques x= 0
    scanf("%d", &n); // Read the number of statements

    for (int i = 0; i < n; i++){
        char statement[4]; // Each statement will be 3 characters
        scanf("%s", &statement);// Read the statement
        
        if (strstr(statement,"++"))
        {
            X++; // Increment x if the statement contains "++"
        }
        else{
            X--; //Decrement x if the statement contains "--"
        }
        
    }
    printf("%d",X); //// Print the final value of x
    
    return 0;
}