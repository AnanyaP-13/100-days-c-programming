//Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int n, i, j, symmetric = 1;

    scanf("%d", &n);

    int matrix[n][n];

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric == 1) {
        printf("True");
    }
    else {
        printf("False");
    }

    return 0;
}