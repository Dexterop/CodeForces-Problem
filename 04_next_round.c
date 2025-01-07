// Question - https://codeforces.com/problemset/problem/158/A

#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k); //read n(participant) and k(kth place score)

    int scores[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &scores[i]); //Read the score
    }
    
    int threshold = scores[k-1]; //k-th place score
    int count =0;
    for (int i = 0; i < n; i++){
        if (scores[i] >= threshold && scores[i] > 0)
        {
            count++;// Count participants who will advance
        }
    }
        printf("%d\n", count);

    return 0;
}