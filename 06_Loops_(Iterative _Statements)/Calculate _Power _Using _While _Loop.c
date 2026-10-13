
#include <stdio.h>
int main()
{
    int base, exp, i = 1;
    int power = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    while (i <= exp)
    {
        power = power * base;
        i++;
    }

    printf("Power = %d", power);

    return 0;
}
