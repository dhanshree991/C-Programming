#include <stdio.h>

int main()
{
    int arr[100], n, i, temp;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for (i = 0; i < n / 2; i++)
    {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + n - 1 - i);
        *(ptr + n - 1 - i) = temp;
    }

    printf("Reversed array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
