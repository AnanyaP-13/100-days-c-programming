//Q95: Check if one string is a rotation of another.

#include <stdio.h>

int main() {
    char str1[100], str2[100], temp[200];
    int i, j, len1 = 0, len2 = 0;
    int rotation = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    while(str1[len1] != '\0') {
        len1++;
    }

    while(str2[len2] != '\0') {
        len2++;
    }

    if(len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    // Create str1 + str1
    for(i = 0; i < len1; i++) {
        temp[i] = str1[i];
        temp[i + len1] = str1[i];
    }

    temp[2 * len1] = '\0';

    // Check if str2 is present in temp
    for(i = 0; i <= 2 * len1 - len2; i++) {
        j = 0;

        while(j < len2 && temp[i + j] == str2[j]) {
            j++;
        }

        if(j == len2) {
            rotation = 1;
            break;
        }
    }

    if(rotation == 1) {
        printf("Rotation");
    }
    else {
        printf("Not rotation");
    }

    return 0;
}