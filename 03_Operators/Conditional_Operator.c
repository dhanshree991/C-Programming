#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int greater;

    greater = (a > b) ? a : b;

    printf("Greater number = %d\n", greater);
  
    return 0;
}
