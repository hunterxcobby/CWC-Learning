#include <stdio.h>

int main (void)
{
    int i;
    int numbers[5] = {10, 20 , 30, 40, 50};

    for (i = 0; i < 5; i++)
    {
        printf("%d -> %p", numbers[i], &numbers);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d -> %p", numbers[i], &numbers[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d -> %p", numbers[i], &numbers[i]);
    }
    printf("\n");
    return (0);
}