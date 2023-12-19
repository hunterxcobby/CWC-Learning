#include <stdio.h>

int add(int a,int b);
int subtract(int a, int b);
int multiplication(int a, int b);

int main(void)
{
    int result;
    int a = 5;
    int b = 10;

    result = add(a, b);

    result = subtract(result, 5);

    printf(" The results - 5 is %d\n", result);

    result = multiplication(result, 10);
    printf(" The results x 10 is %d\n", result);


    return (0);
}




int subtract(int a, int b)
{
    int result = a - b;

    return result;
}

int multiplication(int a, int b)
{
    int result;

    result = a * b;

    return result;
}