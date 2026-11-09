#include <stdio.h>

// Function declaration
int maximum(int a, int b);

int main()
{
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function calling
    result = maximum(num1, num2);

    printf("Maximum number = %d\n", result);

    return 0;
}

// Function definition
int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
