//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
```