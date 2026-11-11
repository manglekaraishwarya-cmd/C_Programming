#include <stdio.h>

int main()
{
    int a = 100;

    int *ptr = &a;

    int **pptr = &ptr;

    printf("Value of a = %d\n", a);

    printf("Value using pointer = %d\n", *ptr);

    printf("Value using double pointer = %d\n", **pptr);

    return 0;
}
