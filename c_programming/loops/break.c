#include <stdio.h>

int main(void)
{
    int i = 1;


     while(i <= 5)/* Infinite loop*/
    {
        printf("%d\n", i);
        i++;

        if (i==3)
        {
            printf("%d\n", i);
            printf("I will stop here\n");
            break;
        }
        
    }
 
    printf("I have finished counting\n");

    return(0);
}