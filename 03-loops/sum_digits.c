#include <stdio.h>

int main(void) {
    int number;
    int sum = 0;

    // Read a non-negative integer whose digits will be added.
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    // Take the last digit with % 10, then remove it with / 10.
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
