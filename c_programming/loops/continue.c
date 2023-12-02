#include <stdio.h>

int main(void)
{
    int i = 0;


     while(i < 5)/* number of iteration is 3*/
    {

        printf("%d\n", i);
        if (i % 2 == 0)
        {
            printf("Do not print %d\n", i);
            continue;
        }
        i++; /* increment*/
    }
 
    return(0);
}