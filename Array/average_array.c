#include<stdio.h>
int main()
{
        int arr[100], i, n;
        int sum = 0;
        float avg;

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
        avg = (float)sum/n;

         printf("The sum of array is %d\n", sum);
         printf("The avg of array is %0.2f\n", avg);


        return 0;

}

