#include <stdio.h>
int main()
{
    int a = 10, b = 20;

    printf("AND = %d\n", a > 5 && b > 15);
    printf("OR = %d\n", a > 15 || b > 15);
    printf("NOT = %d\n", !(a > 5));

    return 0;
}
