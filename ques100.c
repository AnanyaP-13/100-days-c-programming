//Q100: Print all sub-strings of a string.

#include <stdio.h>

int main() {
    char str[100];
    int i, j, k, length = 0;

    scanf("%s", str);

    while(str[length] != '\0') {
        length++;
    }

    for(i = 0; i < length; i++) {
        for(j = i; j < length; j++) {

            for(k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            printf(",");
        }
    }

    return 0;
}