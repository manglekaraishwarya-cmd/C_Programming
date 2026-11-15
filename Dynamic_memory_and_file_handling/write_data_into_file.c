#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    fprintf(fp, "Name: Aishwarya\n");
    fprintf(fp, "Age: 22\n");
    fprintf(fp, "Department: ENTC\n");

    fclose(fp);

    printf("Data written successfully\n");

    return 0;
}
