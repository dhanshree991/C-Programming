#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "a");

    fprintf(fp, "Hello C Language\n");

    fclose(fp);

    printf("Data added successfully!");

    return 0;
}

