#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a positive number.");
    }
    else
    {
        printf("Sum = %d", sum(n));
    }

    return 0;
}
