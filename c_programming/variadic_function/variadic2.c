#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...);

int main(void)
{
    int b = 15;
    int c = 40;
    int d = 50;
    
    printf("%d\n", sum(9, b, c, d));

    return(0);
}

int sum(int count, ...)
{
    int i;
    int total = 0;
    va_list args;

    va_start(args, count);

    /* operation with the arguments*/
    for(i=0; i < count; i++)
    {
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}