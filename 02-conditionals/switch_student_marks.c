#include <stdio.h>

int main(void) {
    int marks;

    printf("Enter your marks (0-100): ");
    if (scanf("%d", &marks) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (marks < 0 || marks > 100) {
        printf("Invalid marks\n");
        return 0;
    }

    switch (marks / 10) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F\n");
    }

    return 0;
}
