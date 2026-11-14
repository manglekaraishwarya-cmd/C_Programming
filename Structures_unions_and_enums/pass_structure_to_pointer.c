#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

void display(struct Student s)
{
    printf("\n----- Student Details -----\n");

    printf("Roll Number: %d\n", s.roll_no);

    printf("Name: %s\n", s.name);

    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter name: ");
    scanf("%49s", s1.name);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    display(s1);

    return 0;
}
