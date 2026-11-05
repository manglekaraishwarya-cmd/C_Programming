#include<stdio.h>
int main()
{
        int  n, original;
        int digit , reverse =0;

        printf("Enter a positive integer:");
        scanf("%d", &n);

        if(n < 0)
        {
                printf("Enter a positive integer");
        }
        original = n;
        while(n > 0)
        {
                digit = n % 10;
                reverse = reverse *10 + digit;
                n = n/ 10;
        }
        if(original == reverse)
        {
                printf("%d is a palindrome\n", original);
        }
        else
        {
                  printf("%d is not a palindrome\n", original);
        }
}

