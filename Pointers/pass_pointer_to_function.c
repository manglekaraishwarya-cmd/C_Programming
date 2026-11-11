#include <stdio.h>

void update(int *ptr)
{
    *ptr = 100;
}

int main()
{
    int a = 10;

    printf("Before update = %d\n", a);

    update(&a);

    printf("After update = %d\n", a);

    return 0;
}
