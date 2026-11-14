#include <stdio.h>

union Data
{
    int a;
    float b;
    char c;
};

int main()
{
    union Data d;

    d.a = 100;

    printf("Integer value: %d\n", d.a);

    d.b = 25.5;

    printf("Float value: %.2f\n", d.b);

    d.c = 'A';

    printf("Character value: %c\n", d.c);

    printf("Size of union: %zu bytes\n", sizeof(d));

    return 0;
}
