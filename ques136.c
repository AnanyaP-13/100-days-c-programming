//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main() {
    enum Operation choice;
    int a, b;
    char op[20];

    scanf("%s %d %d", op, &a, &b);

    if (op[0] == 'A')
        choice = ADD;
    else if (op[0] == 'S')
        choice = SUBTRACT;
    else
        choice = MULTIPLY;

    switch(choice) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}