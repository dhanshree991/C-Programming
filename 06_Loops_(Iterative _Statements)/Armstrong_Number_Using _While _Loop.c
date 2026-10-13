
#include <stdio.h>
int main()
{
    int num, rem, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if (sum == temp)
        printf("%d is an Armstrong number.", temp);
    else
        printf("%d is not an Armstrong number.", temp);

    return 0;
}
