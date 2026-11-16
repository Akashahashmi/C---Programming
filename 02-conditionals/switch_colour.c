#include <stdio.h>

int main(void) {
    int choice;

    printf("Choose a colour:\n");
    printf("1. Red\n");
    printf("2. Blue\n");
    printf("3. Green\n");
    printf("4. Yellow\n");

    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("You chose Red\n");
            break;
        case 2:
            printf("You chose Blue\n");
            break;
        case 3:
            printf("You chose Green\n");
            break;
        case 4:
            printf("You chose Yellow\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
