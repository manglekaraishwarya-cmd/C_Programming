#include<stdio.h>
int main()
{
        int arr[100], i, n;

        printf("Enter number of array :");
        scanf("%d", &n);

        printf("Enter array element :\n");

        for(i  = 0; i < n; i++)
        {
                scanf("%d", &arr[i]);
        }

        printf("Array elements are :\n");

        for(i = 0; i < n; i++)
        {
                printf("%d\n", arr[i]);
        }
        return 0;
}

