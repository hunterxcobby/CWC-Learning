#include <stdio.h>
#include <string.h>

int main(void)
{
    int num1;
    int num2;
    int choice;
    char terminate[5];
    char *string[] = {"yes", "y", "YES"};



do {
    printf(" Calculator Application\n");
    printf("<----------------------->\n");

    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);

    /*printf("Two numbers are %d %d", num1, num2);*/

    /*display menu for the user*/
    printf("\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n");

    printf("\nSelect an operation (1-4): ");
    scanf("%d", &choice);

    /*printf("This is the user's choice = %d\n", choice);*/

    switch (choice)
    {
        case 1:
            printf("You chose 1\n");
            break;
        case 2:
            printf("You chose 2\n");
            break;
        case 3:
            printf("You chose 3\n");
            break;
        case 4:
            printf("You chose 4\n");
            break;
        default:
            printf("Invalid choice!\n");
            /*continue;*/
    }

    printf("Do you want to continue? (yes or no): ");
    
    scanf("%s", terminate);

    printf("You chose %s\n", terminate);

} while (strcmp(terminate, string[0]) == 0);

    return (0);
}