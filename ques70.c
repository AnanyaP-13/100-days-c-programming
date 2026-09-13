//Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k, i, j, temp;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for(i = 1; i <= k; i++) {
        temp = arr[n - 1];

        for(j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}