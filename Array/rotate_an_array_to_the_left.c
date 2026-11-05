#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, temp, rotations;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of rotations: ");
    scanf("%d", &rotations);

    rotations = rotations % n;

    for(int r = 0; r < rotations; r++)
    {
        temp = arr[0];

        for(i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = temp;
    }

    printf("Array after left rotation:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
