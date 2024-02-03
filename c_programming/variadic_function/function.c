#include <stdio.h>

int add(int a, int b, int c, int d);

int main(void)
{
    int a = 9;
    int b = 3;
    int c = 15;
    int d = 10;

    printf("%d\n", add(a, b, c, d));
    return (0);
}


int add(int a, int b, int c, int d)
{
    return (a + b + c + d);
}