#include <stdio.h>

union Data
{
    int number;
    float decimal;
    char character;
};

int main()
{
    union Data d;

    printf("Enter an integer: ");
    scanf("%d", &d.number);

    printf("Integer value: %d\n", d.number);

    printf("Enter a decimal number: ");
    scanf("%f", &d.decimal);

    printf("Decimal value: %.2f\n", d.decimal);

    printf("Enter a character: ");
    scanf(" %c", &d.character);

    printf("Character value: %c\n", d.character);

    return 0;
}
