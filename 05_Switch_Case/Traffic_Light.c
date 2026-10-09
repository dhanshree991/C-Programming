
#include <stdio.h>
int main()
{
    int signal;

    printf("1. Red\n");
    printf("2. Yellow\n");
    printf("3. Green\n");

    printf("Enter signal number: ");
    scanf("%d", &signal);

    switch(signal)
    {
        case 1:
            printf("STOP");
            break;

        case 2:
            printf("WAIT");
            break;

        case 3:
            printf("GO");
            break;

        default:
            printf("Invalid signal");
    }

    return 0;
}
