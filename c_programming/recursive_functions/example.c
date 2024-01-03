#include <stdio.h>

int factorial(int num);

int main(void)
{
    int num = 5;

    printf("Factorial of %d is: %d\n", num, factorial(num));
    return (0);
}

int factorial(int num)
{

    /* Base Case*/
    if (num == 1) /* evaluates to true*/
    {
        return (1);
    }
    else
    {
        /* Recursive case*/
        num = num * factorial(3);
        return (num);
    }
}