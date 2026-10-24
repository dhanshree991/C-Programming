#include <stdio.h>

union Data
{
    int number;
    float price;
    char grade;
};

int main()
{
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of union: %zu bytes\n", sizeof(union Data));

    return 0;
}
