#include<stdio.h>
int main()
{
        int a, b;

        printf("Enter 1st number:");
        scanf("%d", &a);

        printf("Enter 2nd number:");
        scanf("%d", &b);

        if(a > b)
        {
                printf("First no is large\n");
        }
        else if(b > a)
        {
                printf("Second no is large\n");
        }
        else
        {
               printf("Both no equal\n");
        }
    return 0;
}


