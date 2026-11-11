#include <stdio.h>

int main()
{
    char str[] = "Hello";

    char *ptr = str;

    int count = 0;

    while(*ptr != '\0')
    {
        count++;
        ptr++;
    }

    printf("String length = %d\n", count);

    return 0;
}
