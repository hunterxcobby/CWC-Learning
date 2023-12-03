#include <stdio.h>

int main(void)
{
    int counter = 0;

     while(counter < 11)/* Infinite loop*/
     {
        printf("%d\n", counter);

        counter++; /* increases by 1*/
     }
 
    printf("I have finished counting\n");

    return(0);
}