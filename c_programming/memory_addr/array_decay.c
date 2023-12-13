#include <stdio.h>

int main (void)
{
    int i;
    int numbers[5] = {10, 20 , 30, 40, 50};

    printf("%p\n", numbers);

    printf("%d\n", *(numbers + 1));
    printf("%d\n", *(numbers + 2));
    printf("%d\n", *(numbers + 3));
    return (0);
}