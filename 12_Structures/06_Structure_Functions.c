#include <stdio.h>

struct Numbers
{
    int a;
    int b;
};

int calculateSum(struct Numbers n)
{
    return n.a + n.b;
}

int main()
{
    struct Numbers n;
    int sum;

    printf("Enter first number: ");
    scanf("%d", &n.a);

    printf("Enter second number: ");
    scanf("%d", &n.b);

    sum = calculateSum(n);

    printf("Sum = %d\n", sum);

    return 0;
}
