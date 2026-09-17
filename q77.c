//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[100][100];
    int distinct = 1;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for (i = 0; i < r; i++) {
        for (j = i + 1; j < r; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0) {
            break;
        }
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}
