#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i = 0;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            found = 1;

            printf("Character found at position %d\n", i + 1);

            break;
        }

        i++;
    }

    if (found == 0)
    {
        printf("Character not found\n");
    }

    return 0;
}
