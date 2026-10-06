//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int nums[n], answer[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++) {
        answer[i] = 1;
    }

    // Calculate product of elements before i
    int product = 1;
    for(i = 0; i < n; i++) {
        answer[i] = product;
        product = product * nums[i];
    }

    // Calculate product of elements after i
    product = 1;
    for(i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * product;
        product = product * nums[i];
    }

    for(i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}