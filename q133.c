//Create an enum for months and print how many days each month has.

#include <stdio.h>

enum Months {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Months month;
    char input[4];

    scanf("%3s", input);

    if (input[0] == 'J' && input[1] == 'A')
        month = JAN;
    else if (input[0] == 'F')
        month = FEB;
    else if (input[0] == 'M' && input[2] == 'R')
        month = MAR;
    else if (input[0] == 'A' && input[1] == 'P')
        month = APR;
    else if (input[0] == 'M')
        month = MAY;
    else if (input[0] == 'J' && input[2] == 'N')
        month = JUN;
    else if (input[0] == 'J')
        month = JUL;
    else if (input[0] == 'A')
        month = AUG;
    else if (input[0] == 'S')
        month = SEP;
    else if (input[0] == 'O')
        month = OCT;
    else if (input[0] == 'N')
        month = NOV;
    else
        month = DEC;

    switch (month) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days");
            break;

        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days");
            break;

        case FEB:
            printf("28 or 29 days");
            break;
    }

    return 0;
}

