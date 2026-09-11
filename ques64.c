//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int n, digit, i;
    int count[10] = {0};

    scanf("%d", &n);

    while(n != 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    int max = count[0];
    int result = 0;

    for(i = 1; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}