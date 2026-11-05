#include<stdio.h>
int main()
{
        int n;
        int digit;
        int sum =0;

        printf("Enter an integer: ");
        scanf("%d", &n);

        if(n < 0)
        {
                printf("Enter an positive integer");
        }
        while(n > 0)
        {
                digit = n % 10;
                sum = sum + digit;
                n = n/ 10;
        }

        printf("sum = %d\n", sum);
}

