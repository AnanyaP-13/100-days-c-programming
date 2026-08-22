// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main()
{
    int a, b, result;
    char op;

    printf("Enter two numbers and operator: ");
    scanf("%d %d %c", &a, &b, &op);

    switch(op)
    {
        case '+':
            result = a + b;
            printf("%d", result);
            break;

        case '-':
            result = a - b;
            printf("%d", result);
            break;

        case '*':
            result = a * b;
            printf("%d", result);
            break;

        case '/':
            result = a / b;
            printf("%d", result);
            break;

        case '%':
            result = a % b;
            printf("%d", result);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}