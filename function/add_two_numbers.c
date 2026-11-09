#include <stdio.h>

// Function declaration
int add(int a, int b);

int main()
{
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function calling
    result = add(num1, num2);

    printf("Sum = %d\n", result);

    return 0;
}

// Function definition
int add(int a, int b)
{
    int sum;

    sum = a + b;

    return sum;
}
