//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main()
{
    int r, c, i, j;
    int matrix[100][100], rowSum[100];

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
    {
        rowSum[i] = 0;

        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
