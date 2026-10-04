#include <stdio.h>
int main()
{
    float obtained, total, percentage;

    printf("Enter obtained marks: ");
    scanf("%f", &obtained);

    printf("Enter total marks: ");
    scanf("%f", &total);

    percentage = (obtained / total) * 100;

    printf("Percentage = %.2f%%", percentage);

    return 0;
}
