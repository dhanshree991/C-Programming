#include <stdio.h>
int main()
{
    int a, b, multiplication;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    multiplication = a * b;

    printf("Multiplication = %d", multiplication);

    return 0;
}
