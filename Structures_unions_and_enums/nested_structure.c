#include <stdio.h>

struct Address
{
    char city[50];
    char state[50];
    int pin;
};

struct Student
{
    int roll_no;
    char name[50];

    struct Address address;
};

int main()
{
    struct Student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter name: ");
    scanf("%49s", s1.name);

    printf("Enter city: ");
    scanf("%49s", s1.address.city);

    printf("Enter state: ");
    scanf("%49s", s1.address.state);

    printf("Enter PIN code: ");
    scanf("%d", &s1.address.pin);

    printf("\n----- Student Details -----\n");

    printf("Roll Number: %d\n", s1.roll_no);

    printf("Name: %s\n", s1.name);

    printf("City: %s\n", s1.address.city);

    printf("State: %s\n", s1.address.state);

    printf("PIN: %d\n", s1.address.pin);

    return 0;
}
