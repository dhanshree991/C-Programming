#include <stdio.h>

struct Address
{
    char city[30];
    int pinCode;
};

struct Student
{
    int rollNo;
    char name[30];
    struct Address address;
};

int main()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter name: ");
    scanf("%29s", s.name);

    printf("Enter city: ");
    scanf("%29s", s.address.city);

    printf("Enter PIN code: ");
    scanf("%d", &s.address.pinCode);

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("City: %s\n", s.address.city);
    printf("PIN Code: %d\n", s.address.pinCode);

    return 0;
}
