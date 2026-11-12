#include <stdio.h>

struct Employee
{
    int emp_id;
    char name[50];
    char department[50];
    float salary;
    int experience;
};

int main()
{
    struct Employee e1;

    printf("Enter Employee ID: ");
    scanf("%d", &e1.emp_id);

    printf("Enter Employee Name: ");
    scanf("%49s", e1.name);

    printf("Enter Department: ");
    scanf("%49s", e1.department);

    printf("Enter Salary: ");
    scanf("%f", &e1.salary);

    printf("Enter Experience: ");
    scanf("%d", &e1.experience);

    printf("\n----- Employee Details -----\n");

    printf("Employee ID: %d\n", e1.emp_id);

    printf("Name: %s\n", e1.name);

    printf("Department: %s\n", e1.department);

    printf("Salary: %.2f\n", e1.salary);

    printf("Experience: %d Years\n", e1.experience);

    return 0;
}
