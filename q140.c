//Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[20];

    scanf("%19s", input);

    if (strcmp(input, "Gender=MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "Gender=FEMALE") == 0)
        p.gender = FEMALE;
    else
        p.gender = OTHER;

    switch (p.gender) {
        case MALE:
            printf("Male");
            break;

        case FEMALE:
            printf("Female");
            break;

        case OTHER:
            printf("Other");
            break;
    }

    return 0;
}

