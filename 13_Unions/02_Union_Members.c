#include <stdio.h>

union Employee
{
    int id;
    float salary;
    char grade;
};

int main()
{
    union Employee e;

    e.id = 101;
    printf("Employee ID: %d\n", e.id);

    e.salary = 25000.50;
    printf("Employee Salary: %.2f\n", e.salary);

    e.grade = 'A';
    printf("Employee Grade: %c\n", e.grade);

    return 0;
}
