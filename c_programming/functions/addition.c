#include <stdio.h>

int addition(int a, int b);

int main(void)
{
    int sum;
    int a = 10;
    int b = 20;

    addition(a, b);

    printf("Sum = %d\n", sum);

    return (0);
}

int addition(int a, int b)
{
    int result;

    result = a + b;

    return result;
}