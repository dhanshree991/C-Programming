#include <stdio.h>

struct Employee
{
    char name[50];
    int id;
    float salary;
};

int main()
{
    struct Employee e;

    printf("Enter employee name: ");
    scanf(" %49[^\n]", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee salary: ");
    scanf("%f", &e.salary);

    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", e.name);
    printf("Employee ID: %d\n", e.id);
    printf("Salary: Rs. %.2f\n", e.salary);

    return 0;
}
