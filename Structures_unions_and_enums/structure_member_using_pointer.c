#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct Student s1;

    struct Student *ptr;

    ptr = &s1;

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter name: ");
    scanf("%49s", ptr->name);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\n----- Student Details -----\n");

    printf("Roll Number: %d\n", ptr->roll_no);

    printf("Name: %s\n", ptr->name);

    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
