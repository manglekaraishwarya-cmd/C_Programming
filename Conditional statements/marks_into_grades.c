#include<stdio.h>
int main()
{
        int marks;

        printf("Enter a marks:");
        scanf("%d",&marks);

        if(marks < 0 || marks > 100)
        {
                printf("Invalid marks");
        }
        else if(marks >90)
        {
                printf("grade A\n");
        }
        else if(marks >80)
        {
                printf("grade B\n");
        }

        else if(marks >70)
        {
                printf("grade C\n");
        }

        else if(marks >60)
        {
                printf("grade D\n");
        }

        else if(marks >50)
        {
                printf("grade E\n");
        }
        else
        {
                printf("FAIL");
        }
        return 0;
}

