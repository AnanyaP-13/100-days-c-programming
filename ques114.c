//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.


#include <stdio.h>

int main() {
    char s[1000];
    int i, j, k, length = 0, maxLength = 0, repeat;

    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++) {
        length = 0;

        for(j = i; s[j] != '\0'; j++) {
            repeat = 0;

            for(k = i; k < j; k++) {
                if(s[k] == s[j]) {
                    repeat = 1;
                    break;
                }
            }

            if(repeat == 1) {
                break;
            }

            length++;
        }

        if(length > maxLength) {
            maxLength = length;
        }
    }

    printf("%d", maxLength);

    return 0;
}