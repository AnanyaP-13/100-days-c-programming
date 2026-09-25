//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0};
    int i;

    scanf("%s", str1);
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++) {
        count[str1[i] - 'a']++;
    }

    for(i = 0; str2[i] != '\0'; i++) {
        count[str2[i] - 'a']--;
    }

    for(i = 0; i < 26; i++) {
        if(count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}