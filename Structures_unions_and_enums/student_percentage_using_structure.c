#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];

    float c;
    float maths;
    float electronics;
    float physics;
    float english;

    float total;
    float percentage;
};

int main()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter name: ");
    scanf("%49s", s.name);

    printf("Enter C marks: ");
    scanf("%f", &s.c);

    printf("Enter Maths marks: ");
    scanf("%f", &s.maths);

    printf("Enter Electronics marks: ");
    scanf("%f", &s.electronics);

    printf("Enter Physics marks: ");
    scanf("%f", &s.physics);

    printf("Enter English marks: ");
    scanf("%f", &s.english);

    s.total = s.c + s.maths + s.electronics
              + s.physics + s.english;

    s.percentage = (s.total / 500) * 100;

    printf("\n----- Student Result -----\n");

    printf("Roll Number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);

    printf("Total Marks: %.2f\n", s.total);

    printf("Percentage: %.2f%%\n", s.percentage);

    return 0;
}
