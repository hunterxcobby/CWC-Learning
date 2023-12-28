#include <stdio.h>

int main(void)
{
    int num1;
    int num2;


    printf(" Calculator Application\n");
    printf("<----------------------->\n");

    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);

    /*printf("Two numbers are %d %d", num1, num2);*/

    /*display menu for the user*/
    printf("\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n");

    printf("\nSelect an operation (1-4): ");


    return (0);
}