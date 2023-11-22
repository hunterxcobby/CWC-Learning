#include "stdio.h"

int main(void)
{
    char c;
    float f;
    int i;
    char *string;
    double d;
    int *pointer;

    printf("The size is %lu byte\n", sizeof(c));
    printf("The size is %lu byte\n", sizeof(f));
    printf("The size is %lu byte\n", sizeof(i));
    printf("The size is %lu byte\n", sizeof(string));
    printf("The size is %lu byte\n", sizeof(d));
    printf("The size is %lu byte\n", sizeof(pointer));


    return(0);
}