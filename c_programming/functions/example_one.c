#include <stdio.h>

/**
 * this is to explain functions
*/
void greeting(void);/*the prototype*/

int main(void) /* the entry point*/
{
    printf("Hello World\n");

    /* calling the function*/
    greeting();
    greeting();
    greeting();
    greeting();
    greeting();

    return(0);/* indicate successful or failure*/
}


void greetings(void)/*parameters*/
