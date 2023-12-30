#include "main.h"

int main(void) /* entry point*/
{
    int num1;
    int num2;
    int choice;
    int result;
    char terminate[5];
    /*char *string[] = {"yes", "y", "YES"};*/



do {
    printf("\n Calculator Application\n");
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
            /*printf("You chose 1\n");*/
            result = calculate(num1, num2, add);
            printf("Sum is %d\n", result);
            break;
        case 2:
            /*printf("You chose 2\n");*/
            result = calculate(num1, num2, sub);
            printf("Difference is %d\n", result);
            break;
        case 3:
            /*printf("You chose 3\n");*/
            if (num2 == 0)
            {
                printf("Division by zero is not allowed\n");
                /*continue;*/
            }
            else
            {
                result = calculate(num1, num2, div);
                printf("Result is %d\n", result);
            }
            break;
        case 4:
            /*printf("You chose 4\n");*/
            result = calculate(num1, num2, mul);
            printf("Product is %d\n", result);
            break;
        default:
            printf("Invalid choice!\n");
            /*continue;*/
    }

    printf("Do you want to continue? (yes or no): ");
    
    scanf("%s", terminate);

    printf("You chose %s\n", terminate);

} while (strcmp(terminate, "yes") == 0);

    return (0);
}
