#include <stdio.h>

int main(void)
{
    int i = 1;


     while(i <= 5)/* number of iteration is 3*/
    {
        i++;
        printf("%d\n", i);

        if (i % 2 == 0)
        {
            printf("I will stop here\n");
            continue;
        }
    }
 
    printf("I have finished counting\n");

    return(0);
}