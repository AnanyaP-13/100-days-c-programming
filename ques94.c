//Q94: Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char str[200];
    char word[100], longest[100];
    int i = 0, j = 0;
    int length = 0, maxLength = 0;

    fgets(str, sizeof(str), stdin);

    while(1) {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j] = str[i];
            j++;
            length++;
        }
        else {
            word[j] = '\0';

            if(length > maxLength) {
                maxLength = length;

                for(j = 0; word[j] != '\0'; j++) {
                    longest[j] = word[j];
                }

                longest[j] = '\0';
            }

            j = 0;
            length = 0;
        }

        if(str[i] == '\0') {
            break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}