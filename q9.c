//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;

    scanf("%lf %lf %lf", &principal, &rate, &time);

    double simpleInterest = (principal * rate * time) / 100;
    double compoundInterest = principal * pow(1 + rate / 100, time) - principal;

    printf("Simple Interest=%.2f, Compound Interest=%.2f\n",
           simpleInterest, compoundInterest);

    return 0;
}
