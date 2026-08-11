// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    float r, area, circumference;
    const float PI = 3.14159;

    scanf("%f", &r);

    area = PI * r * r;
    circumference = 2 * PI * r;

    printf("Area=%.2f, Circumference=%.2f", area, circumference);

    return 0;
}
