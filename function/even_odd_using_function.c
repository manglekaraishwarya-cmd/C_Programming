#include <stdio.h>

// Function declaration
void checkEvenOdd(int num);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    checkEvenOdd(num);

    return 0;
}

// Function definition
void checkEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is an Even number\n", num);
    }
    else
    {
        printf("%d is an Odd number\n", num);
    }
}
