
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File not found!");
        return 1;
    }

    ch = fgetc(fp);

    printf("Character = %c\n", ch);

    fclose(fp);

    return 0;
}
