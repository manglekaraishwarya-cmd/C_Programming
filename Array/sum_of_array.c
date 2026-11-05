#include<stdio.h>
int main()
{
        int arr[100], i, n;
        int sum = 0;

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
                sum = sum +arr[i];
        }
         printf("The sum of array is %d\n", sum);

        return 0;

}

