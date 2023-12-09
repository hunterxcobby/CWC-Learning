#include <stdio.h>

int main (void)
{
    int i, j;

    for (i = 0; i <= 2; i++)
    {
        printf("Outter is %d \n", i);

        for (j = 0;  j <= 3; j++)
        {
           printf("Inner is %d\n", j);
        }
    }
    

    return (0);
}