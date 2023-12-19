#include <stdio.h>

int division(int num1, int num2);

int main(void)
{
    int result;
    int a = 20;
    int b = 10;

    result = division(a, b);

    printf("Result = %d\n", result);
    return (0);
}

int division(int num1, int num2)
{
    int div;

    div = num1 / num2;

    return (0);
}