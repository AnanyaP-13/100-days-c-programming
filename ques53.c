//Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

#include <stdio.h>

int main() {
    int i, j, stars;

    for(i = 1; i <= 5; i++) {
        stars = 2 * i - 1;

        for(j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    for(i = 4; i >= 1; i--) {
        stars = 2 * i - 1;

        for(j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}