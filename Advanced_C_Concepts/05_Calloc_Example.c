#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    p = (int *)calloc(1, sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    *p = n;

    printf("Number = %d", *p);

    free(p);

    return 0;
}
