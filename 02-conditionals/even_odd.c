#include <stdio.h>

int main(void) {
    int number;

    // Ask the user for an integer.
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // A number is even when its remainder after division by 2 is zero.
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
