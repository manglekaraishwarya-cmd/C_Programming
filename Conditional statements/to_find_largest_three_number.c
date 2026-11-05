#include<stdio.h>
int main()
{
        int a, b, c;

        printf("Enter 1st no:");
        scanf("%d", &a);

        printf("Enter 2nd no:");
        scanf("%d", &b);

        printf("Enter 3rd no:");
        scanf("%d", &c);

        if(a > b && a > c)
        {
                printf("1st no is large\n");
        }

       else if(b > a && b > c)
        {
                printf("2nd no is large\n");
        }

        else
        {
                printf("3rd no is large\n");
        }

return 0;
}

