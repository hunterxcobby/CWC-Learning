#include <stdio.h>

int add(int num1, int num2);

int main(void)
{
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf(("%d\n"), add(a, b));

    return (0); 
}

int add(int num1, int num2) /* placeholder for variables*/
{
    return num1 + num2;
}