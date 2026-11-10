#include <stdio.h>

int main()
{
    int a = 50;

    int *ptr;

    ptr = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void *)ptr);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}
