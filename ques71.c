//Q71: Read and print a matrix.

#include <stdio.h>

int main() {
    int rows, columns, i, j;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}