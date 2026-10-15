
#include <stdio.h>
void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d", a, b);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap(a, b);

    return 0;
}
