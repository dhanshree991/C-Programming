
#include <stdio.h>

float average(int a, int b)
{
    return (a + b) / 2.0;
}

int main()
{
    float result;

    result = average(10, 20);

    printf("Average = %.2f", result);

    return 0;
}
