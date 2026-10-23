#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid number of elements.");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    smallest = *ptr;

    for (i = 1; i < n; i++)
    {
        if (*(ptr + i) < smallest)
        {
            smallest = *(ptr + i);
        }
    }

    printf("Smallest element = %d", smallest);

    return 0;
}
