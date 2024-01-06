#include <stdio.h>
#include <stdarg.h>

int add(int count, ...);

int main()
{
   int a = 1;
   int b = 2;
   int c = 3;
   int d = 4;
   int result;

    result = add(9, a, b, c, d);
    printf("The sum is %d\n", result);
    return 0;
}


int add(int count, ...)
{
    int i;
    int result;
    va_list args;
    
    va_start(args, count);

    for(i = 0; i < count; i++)
    {
        result = result + va_arg(args, int);
    }

    va_end(args);

    return (result);
}