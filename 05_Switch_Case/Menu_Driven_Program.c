
#include <stdio.h>
int main()
{
    int choice;

    printf("1. Hello\n");
    printf("2. Welcome\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Hello!");
            break;

        case 2:
            printf("Welcome to C Programming!");
            break;

        case 3:
            printf("Program ended.");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
