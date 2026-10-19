#include <stdio.h>

float interest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float p, r, t;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    printf("Simple Interest = %.2f", interest(p, r, t));
    return 0;
}
