// Question - https://codeforces.com/problemset/problem/263/A

#include <stdio.h>
#include <stdlib.h>  // For abs function

int main() {
    int matrix[5][5];
    int x, y;

    // Read the matrix and find the position of 1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) {
                x = i + 1;
                y = j + 1;
            }
        }
    }

    // Calculate the number of moves to the center
    int moves = abs(3 - x) + abs(3 - y);

    // Output the result
    printf("%d\n", moves);

    return 0;
}
