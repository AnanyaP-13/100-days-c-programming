//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int a[100], seen[1000] = {0};
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (seen[a[i]] == 1) {
            printf("Repeated element = %d", a[i]);
            return 0;
        }
        seen[a[i]] = 1;
    }

    return 0;
}