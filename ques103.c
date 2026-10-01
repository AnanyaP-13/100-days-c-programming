//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

int main() {
    int n, i, j;
    int total = 0, leftSum = 0;
    int pivot = -1;

    scanf("%d", &n);

    int nums[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total = total + nums[i];
    }

    for(i = 0; i < n; i++) {
        int rightSum = total - leftSum - nums[i];

        if(leftSum == rightSum) {
            pivot = i;
            break;
        }

        leftSum = leftSum + nums[i];
    }

    printf("%d", pivot);

    return 0;
}