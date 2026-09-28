//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char date[20];
    int day, year;

    scanf("%d/04/%d", &day, &year);

    printf("%02d-Apr-%d", day, year);

    return 0;
}
