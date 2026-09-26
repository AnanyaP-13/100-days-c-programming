//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0, j;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {

        if(str[i] == ' ' || str[i] == '\n') {

            for(j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }

            if(str[i] == ' ') {
                printf(" ");
            }

            start = i + 1;
        }

        i++;
    }

    return 0;
}