#include<stdio.h>
int main()
{
        int i;

        printf("Enter a number:");
        scanf("%d", &i);

        for(i = 2; i <=100; i += 2)
        {
                if(i %2 == 0)
                {
                        printf("%d\n", i);
                }
        }
        return 0;
}

