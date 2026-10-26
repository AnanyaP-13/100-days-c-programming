//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

```c
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char src[100], dest[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%99s", src);

    printf("Enter destination filename: ");
    scanf("%99s", dest);

    source = fopen(src, "r");

    if (source == NULL) {
        printf("Unable to open source file");
        return 1;
    }

    destination = fopen(dest, "w");

    if (destination == NULL) {
        printf("Unable to open destination file");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully to %s", dest);

    fclose(source);
    fclose(destination);

    return 0;
}
```