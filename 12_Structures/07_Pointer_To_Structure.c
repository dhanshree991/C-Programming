#include <stdio.h>

struct Mobile
{
    char brand[30];
    int price;
};

int main()
{
    struct Mobile m;
    struct Mobile *ptr;

    printf("Enter mobile brand: ");
    scanf("%29s", m.brand);

    printf("Enter mobile price: ");
    scanf("%d", &m.price);

    ptr = &m;

    printf("\n--- Mobile Details ---\n");
    printf("Brand: %s\n", ptr->brand);
    printf("Price: Rs. %d\n", ptr->price);

    return 0;
}
