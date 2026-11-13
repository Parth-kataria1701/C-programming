//Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input details of 5 students
    printf("Enter details of 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%49s", s[i].name);

        printf("Enter Roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\n------ Student Details ------\n");
    printf("Name\t\tRoll\tMarks\n");

    for (i = 0; i < 5; i++) {
        printf("%-15s\t%d\t%.2f\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}

