// ques - https://codeforces.com/problemset/problem/151/A

#include <stdio.h>

void softdrink(int n, int k, int l, int c, int d, int p, int nl, int np) {
    
    int total_drink = k * l;
    int total_lime = c * d;
    int total_salt = p;

    
    int drink_toasts = total_drink / nl;
    int lime_toasts = total_lime;
    int salt_toasts = total_salt / np;

    
    int max_toasts = drink_toasts < lime_toasts ? drink_toasts : lime_toasts;
    max_toasts = max_toasts < salt_toasts ? max_toasts : salt_toasts;

    
    int toasts_per_person = max_toasts / n;

    
    printf("%d\n", toasts_per_person);
}

int main() {
    int n, k, l, c, d, p, nl, np;
    
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    
    softdrink(n, k, l, c, d, p, nl, np);
    return 0;
}



/*
1000 ml = drink
1000 / 4 = toast = 250
lime = 19 
salt = 90/3 = 30

250 / 5 = 50
19/5 = 3
30/5 = 6

3
*/