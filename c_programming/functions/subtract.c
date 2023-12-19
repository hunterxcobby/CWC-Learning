#include <stdio.h>

int subtract(int a, int b);

int main(void)
{
    int c;
    int a = 20;
    int b = 10;

    c = subtract(b, a);
    printf("%d\n", c);
    return (0);
}

int subtract(int a, int b)
{
    int result = a - b;

    return result;
}