#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int age = 99;
    int *ptr = &age;
    
    printf("%d -> ", *ptr);
    printf("%p\n", ptr);

    return (0);
}