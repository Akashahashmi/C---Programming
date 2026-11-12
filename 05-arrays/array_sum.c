#include <stdio.h>

int main(void) {
    int numbers[5];
    int sum = 0;

    // Read five integers into the array.
    printf("Enter five integers: ");
    for (int i = 0; i < 5; i++) {
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    // Visit each array element and add it to the total.
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
