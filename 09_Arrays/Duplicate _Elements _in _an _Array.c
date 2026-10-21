
#include <stdio.h>

int main()
{
    int arr[5], i, j, count = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are:\n");

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                count++;
                break;
            }
        }
    }

    printf("\nTotal duplicate elements = %d", count);

    return 0;
}
