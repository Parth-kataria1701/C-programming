//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
#include <string.h>

enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Menu choice;
    char operation[20];
    int a, b;

    scanf("%s %d %d", operation, &a, &b);

    if (strcmp(operation, "ADD") == 0)
        choice = ADD;

    else if (strcmp(operation, "SUBTRACT") == 0)
        choice = SUBTRACT;

    else if (strcmp(operation, "MULTIPLY") == 0)
        choice = MULTIPLY;

    else
    {
        printf("Invalid choice");
        return 0;
    }

    switch (choice)
    {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
