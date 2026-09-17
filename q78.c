//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    int matrix[100][100];

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum of main diagonal elements
    for (i = 0; i < r; i++) {
        sum += matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}
