//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    char binary[100];

    scanf("%s", binary);

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            printf("1");
        else
            printf("0");
    }

    return 0;
}

