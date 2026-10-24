#include <stdio.h>

struct Demo
{
    int a;
    int b;
};

union Test
{
    int a;
    int b;
};

int main()
{
    struct Demo s;
    union Test u;

    s.a = 10;
    s.b = 20;

    printf("Structure:\n");
    printf("a = %d\n", s.a);
    printf("b = %d\n", s.b);

    u.a = 10;
    printf("\nUnion:\n");
    printf("a = %d\n", u.a);

    u.b = 20;
    printf("b = %d\n", u.b);

    printf("\nSize of Structure: %zu bytes\n", sizeof(s));
    printf("Size of Union: %zu bytes\n", sizeof(u));

    return 0;
}
