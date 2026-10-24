#include<stdio.h>

void main()
{
FILE *fp;

fp = fopen("data.txt","w");

fprintf(fp, "My first file program.");

fclose(fp);

printf("Data save successfully");

}
