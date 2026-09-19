//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int r, c;
    int a[100][100];

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int k = 0; k < r + c - 1; k++) {
        if (k % 2 == 0) {
            int i = (k < r) ? k : r - 1;
            int j = k - i;

            while (i >= 0 && j < c) {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        } else {
            int j = (k < c) ? k : c - 1;
            int i = k - j;

            while (i < r && j >= 0) {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}

