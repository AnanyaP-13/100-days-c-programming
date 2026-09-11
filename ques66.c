//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, element, pos;

    scanf("%d", &n);

    int arr[n + 1];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    pos = 0;

    while(pos < n && arr[pos] < element) {
        pos++;
    }

    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;

    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}