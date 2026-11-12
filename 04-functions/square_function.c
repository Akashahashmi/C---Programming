#include <stdio.h>

// This function receives a number and returns its square.
int square(int number) {
    return number * number;
}

int main(void) {
    int number;

    // Read the number that should be squared.
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Call the function and print the returned value.
    printf("Square = %d\n", square(number));

    return 0;
}
