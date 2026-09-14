//Q72: Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, columns, i, j, sum = 0;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}