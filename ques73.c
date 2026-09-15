//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, columns, i, j;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    int sum[rows];

    for(i = 0; i < rows; i++) {
        sum[i] = 0;

        for(j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            sum[i] = sum[i] + matrix[i][j];
        }
    }

    for(i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}