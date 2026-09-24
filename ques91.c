//Q91: Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    scanf("%s", str);

    while(str[i] != '\0') {

        if(str[i] != 'a' && str[i] != 'e' &&
           str[i] != 'i' && str[i] != 'o' &&
           str[i] != 'u') {
            printf("%c", str[i]);
        }

        i++;
    }

    return 0;
}