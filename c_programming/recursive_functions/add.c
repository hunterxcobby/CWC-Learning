#include <stdio.h>

int add (int a);

int main (void)
{
    int sum;

    int a = 10;

    sum = add(a);
    printf("%d\n", sum);

    return (0);
}

int add(int a)
{
    int result;

    /* base case*/
    if(a == 0)
    {
        return (a);
    }
    else
    {
        /* recursive case*/
        result = a + add(a - 1);
    }

    return (result);
}
