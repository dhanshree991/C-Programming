#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr, largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    largest = *ptr;

    for (i = 1; i < n; i++)
    {
        if (*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }

    printf("Largest element = %d", largest);

    return 0;
}
