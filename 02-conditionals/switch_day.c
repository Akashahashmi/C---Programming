#include <stdio.h>

int main(void) {
    int day;

    // Read a number representing a day of the week (1 to 7).
    printf("Enter a day number (1-7): ");
    if (scanf("%d", &day) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    // Use switch to choose the matching weekday.
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number. Enter a value from 1 to 7.\n");
    }

    return 0;
}
