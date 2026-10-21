
#include <stdio.h>

int main()
{
    int a[5], i, num, found = 0;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++)
    {
        if(a[i] == num)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Element found at index %d", i);
    else
        printf("Element not found");

    return 0;
}
