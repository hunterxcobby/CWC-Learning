#include <stdio.h>

int main(void)
{
    int counter = 1;


     while(counter < 11)/* Infinite loop*/
     {
        printf("%d\n", counter);

        counter++; /* increases by 1*/
     }
 
    printf("I have finished counting\n");

    return(0);
}