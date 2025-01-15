#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char username[101];
    scanf("%s", &username);

    bool characters[26] = {false};  // To keep track of distinct characters
    int distinctCount = 0;

    for (int i = 0; i < strlen(username); i++) {
        int index = username[i] - 'a';
        if (!characters[index]) {
            characters[index] = true;
            distinctCount++;
        }
    }

    if (distinctCount % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }
    return 0;
}