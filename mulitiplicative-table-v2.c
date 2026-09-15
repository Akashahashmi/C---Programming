#include <stdio.h>

int main() {
    int a, num;

    printf("Enter a number: ");
    scanf("%d", &a);

    num = 1;

    do {
        printf("%d * %d = %d\n", a, num, a * num);
        num++;
    } while (num <= 10);

    return 0;
}
