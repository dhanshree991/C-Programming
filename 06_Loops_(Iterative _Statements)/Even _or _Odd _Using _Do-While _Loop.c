#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        if (num % 2 == 0)
            printf("%d is Even.", num);
        else
            printf("%d is Odd.", num);

    } while (0);

    return 0;
}
