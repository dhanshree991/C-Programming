
#include <stdio.h>

int main()
{
    int arr[5], i, even = 0, odd = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d is Even\n", arr[i]);
            even++;
        }
        else
        {
            printf("%d is Odd\n", arr[i]);
            odd++;
        }
    }

    printf("Total Even = %d\n", even);
    printf("Total Odd = %d", odd);

    return 0;
}
