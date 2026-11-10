#include <stdio.h>

// Function declaration
int calculatePower(int base, int exponent);

int main()
{
    int base, exponent, result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Function call
    result = calculatePower(base, exponent);

    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}

// Function definition
int calculatePower(int base, int exponent)
{
    int i, power = 1;

    for (i = 1; i <= exponent; i++)
    {
        power = power * base;
    }

    return power;
}
