//Q63: Merge two arrays.

#include <stdio.h>

int main() {
    int n1, n2, i, j;

    scanf("%d", &n1);

    int arr1[n1];

    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);

    int arr2[n2];

    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int arr3[n1 + n2];

    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    for(j = 0; j < n2; j++) {
        arr3[i + j] = arr2[j];
    }

    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}