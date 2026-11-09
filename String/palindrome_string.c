#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0;
    int flag = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (str[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Palindrome string\n");
    }
    else
    {
        printf("Not a palindrome string\n");
    }

    return 0;
}
