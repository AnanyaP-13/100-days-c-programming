//Q97: Print the initials of a name.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    // Print the first character
    if(str[0] != ' ') {
        printf("%c.", str[0]);
    }

    // Print characters after spaces
    while(str[i] != '\0') {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            printf("%c.", str[i + 1]);
        }

        i++;
    }

    return 0;
}