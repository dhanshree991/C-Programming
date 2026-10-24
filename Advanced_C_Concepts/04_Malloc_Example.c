#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.");
        return 0;
    }

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Numbers are: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
