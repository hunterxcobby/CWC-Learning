#include <stdio.h>

int multiplication(int a, int b);

int main(void)
{
    int product;
    int a = 10;
    int b = 20;

    product = multiplication(a, b);
    printf("Result = %d\n", product);
    return (0);
}

int multiplication(int a, int b)
{
    int result;

    result = a * b;

    printf("result in the function is %d\n", result);
    return a;
}