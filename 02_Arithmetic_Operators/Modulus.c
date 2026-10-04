#include <stdio.h>
int main()
{
    int a, b, modulus;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    modulus = a % b;
    printf("Modulus = %d", modulus);

    return 0;
}
