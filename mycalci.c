#include <stdio.h>

int main()
{
    float a;
    float b;
    char operator;

    printf("Enter your first number: ");
    scanf("%f", &a);

    printf("Enter your second number: ");
    scanf("%f", &b);

    printf("Enter the operation you want: ");
    scanf(" %c", &operator);

    if (operator == '+')
    {
        printf("%f + %f = %f", a, b, a + b);
    }
    else if (operator == '-')
    {
        printf("%f - %f = %f", a, b, a - b);
    }
    else if (operator == '*')
    {
        printf("%f * %f = %f", a, b, a * b);
    }
    else if (operator == '/')
    {
        if (b == 0)
        {
            printf("Cannot divide by zero");
        }
        else
        {
            printf("%f / %f = %f", a, b, a / b);
        }
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
}
