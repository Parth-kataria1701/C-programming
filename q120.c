//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, newWord = 1;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            if (newWord) {
                str[i] = toupper((unsigned char)str[i]);
                newWord = 0;
            } else {
                str[i] = tolower((unsigned char)str[i]);
            }
        } else {
            if (isspace((unsigned char)str[i])) {
                newWord = 1;
            }
        }
    }

    printf("%s", str);

    return 0;
}

