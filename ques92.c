//Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};
    int i;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++;

        if(count[str[i] - 'a'] == 2) {
            printf("%c", str[i]);
            return 0;
        }
    }

    return 0;
}