
#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num > 0 ? 1 : (num < 0 ? -1 : 0))
    {
        case 1:
            printf("Number is positive.");
            break;

        case -1:
            printf("Number is negative.");
            break;

        case 0:
            printf("Number is zero.");
            break;
    }

    return 0;
}
