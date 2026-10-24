#include <stdio.h>

int main()
{
    FILE *fp;
    int ch, count = 0;

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        count++;
    }

    fclose(fp);

    printf("Characters = %d", count);

    return 0;
}
