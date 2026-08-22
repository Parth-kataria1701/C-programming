//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    scanf("%d %d %c", &num1, &num2, &op);

    switch(op)
    {
        case '+':
            printf("%d", num1 + num2);
            break;

        case '-':
            printf("%d", num1 - num2);
            break;

        case '*':
            printf("%d", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("%d", num1 / num2);
            else
                printf("Division by zero not possible");
            break;

        case '%':
            if(num2 != 0)
                printf("%d", num1 % num2);
            else
                printf("Modulo by zero not possible");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}

