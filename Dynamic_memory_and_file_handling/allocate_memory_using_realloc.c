#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int *temp;
    int n, new_n, i;

    printf("Enter initial size: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid size\n");
        return 1;
    }

    ptr = malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Enter new size: ");
    scanf("%d", &new_n);

    if (new_n <= 0)
    {
        printf("Invalid size\n");
        free(ptr);
        return 1;
    }

    temp = realloc(ptr, new_n * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed\n");
        free(ptr);
        return 1;
    }

    ptr = temp;

    if (new_n > n)
    {
        printf("Enter additional elements:\n");

        for (i = n; i < new_n; i++)
        {
            scanf("%d", &ptr[i]);
        }
    }

    printf("Final array elements:\n");

    for (i = 0; i < new_n; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
