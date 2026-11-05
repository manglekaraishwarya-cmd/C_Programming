#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100];
    int n, i;
    int largest = INT_MIN;
    int second = INT_MIN;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    if(second == INT_MIN)
    {
        printf("Second-largest distinct element does not exist");
    }
    else
    {
        printf("Second-largest element = %d", second);
    }

    return 0;
}
