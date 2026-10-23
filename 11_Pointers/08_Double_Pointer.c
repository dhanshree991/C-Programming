#include <stdio.h>

int main()
{
    int num;
    int *ptr;
    int **ptr2;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;
    ptr2 = &ptr;

    printf("Value of num = %d\n", num);
    printf("Value using pointer = %d\n", *ptr);
    printf("Value using double pointer = %d\n", **ptr2);

    return 0;
}

