#include <stdio.h>

int main()
{
    char str[100];
    char *start, *end;
    int palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    start = str;

    while (*start != '\0' && *start != '\n')
    {
        start++;
    }

    if (start > str && *(start - 1) == '\n')
    {
        start--;
    }

    *start = '\0';

    if (start > str)
    {
        end = start - 1;
    }
    else
    {
        end = start;
    }

    start = str;

    while (start < end)
    {
        if (*start != *end)
        {
            palindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if (palindrome)
        printf("String is a palindrome.");
    else
        printf("String is not a palindrome.");

    return 0;
}
