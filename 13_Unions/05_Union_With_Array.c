#include <stdio.h>

union Data
{
    int numbers[3];
    float value;
};

int main()
{
    union Data d;
    int i;

    printf("Enter 3 numbers:\n");

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &d.numbers[i]);
    }

    printf("Array elements are:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d\n", d.numbers[i]);
    }

    return 0;
}
