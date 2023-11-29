#include <stdio.h>

int main(void)
{

    int choice;

    printf("Choose one of this\n");
    printf("1. One\n");
    printf("2. Two\n");
    printf("3. Three\n");
    printf("4. Four\n");

    printf("Enter your choice:");
    scanf("%d", &choice);


    switch(choice)
    {
        case 1: /* do not forget your column*/
            printf("You chose 1\n");
            break;
        case 2:/* in case */
            printf("You chose 2\n");
            break;
        case 3:
            printf("You chose 3\n");
            break;
        case 4:
            printf("You chose 4\n");
            break;
        default:
            printf("Invalid choice...\n");
    }

    return(0);
}