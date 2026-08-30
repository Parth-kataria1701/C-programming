//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, first, last, middle, power, result;

    scanf("%d", &n);

    last = n % 10;

    power = 1;
    while (n / power >= 10) {
        power = power * 10;
    }

    first = n / power;
    middle = n % power;
    middle = middle / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}

