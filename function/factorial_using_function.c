#include <stdio.h>

// Function declaration
unsigned long long factorial(int n);

int main()
{
    int n;
    unsigned long long result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Please enter a number between 0 and 20\n");
    }
    else
    {
        // Function calling
        result = factorial(n);

        printf("Factorial of %d = %llu\n", n, result);
    }

    return 0;
}

// Function definition
unsigned long long factorial(int n)
{
    unsigned long long fact = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}
