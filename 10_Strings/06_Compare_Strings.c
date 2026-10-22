#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, flag = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if(str1[i] == '\n' && str2[i] == '\n')
            break;

        if(str1[i] != str2[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        if((str1[i] == '\n' || str1[i] == '\0') &&
           (str2[i] == '\n' || str2[i] == '\0'))
            printf("Strings are equal");
        else
            printf("Strings are not equal");
    }
    else
    {
        printf("Strings are not equal");
    }

    return 0;
}
