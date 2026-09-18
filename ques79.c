//Q79: Perform diagonal traversal of a matrix.

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

    // Start diagonals from the first column
    for(i = 0; i < rows; i++) {
        int row = i;
        int col = 0;

        while(row >= 0 && col < columns) {
            printf("%d ", matrix[row][col]);
            row--;
            col++;
        }
    }

    // Start remaining diagonals from the top row
    for(j = 1; j < columns; j++) {
        int row = rows - 1;
        int col = j;

        while(row >= 0 && col < columns) {
            printf("%d ", matrix[row][col]);
            row--;
            col++;
        }
    }

    return 0;
}