#include <stdio.h>

int main(void)
{
    int n, i;
    long long sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %lld\n", sum);

    return 0;
}

