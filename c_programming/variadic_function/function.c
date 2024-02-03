#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);


    printf("%d\n", add(a, b));
    return (0);
}


int add(int a, int b)
{
    return (a + b);
}