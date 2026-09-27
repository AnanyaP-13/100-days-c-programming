//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, start = 0, lastSpace = 0;

    fgets(str, sizeof(str), stdin);

    // Find the position of the last space
    while(str[i] != '\0') {
        if(str[i] == ' ') {
            lastSpace = i;
        }
        i++;
    }

    // Print initials of first and middle names
    for(i = 0; i < lastSpace; i++) {
        if(i == 0) {
            printf("%c.", str[i]);
        }
        else if(str[i] == ' ' && str[i + 1] != ' ') {
            printf("%c.", str[i + 1]);
        }
    }

    // Print surname in full
    printf(" ");

    i = lastSpace + 1;

    while(str[i] != '\0' && str[i] != '\n') {
        printf("%c", str[i]);
        i++;
    }

    return 0;
}