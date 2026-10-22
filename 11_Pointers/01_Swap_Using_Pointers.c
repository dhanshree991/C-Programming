#include <stdio.h>

int main()
{
    int a, b, temp;
    int *p1, *p2;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\nAfter swapping:");
    printf("\nFirst number = %d", a);
    printf("\nSecond number = %d", b);

    return 0;
}
