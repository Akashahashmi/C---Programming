#include <stdio.h>

int main(void) {
    int first, second;

    // Read two integers from the user.
    printf("Enter two integers: ");
    if (scanf("%d %d", &first, &second) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }

    // Add the numbers and display the result.
    printf("Sum = %d\n", first + second);

    return 0;
}
