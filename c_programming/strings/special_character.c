#include <stdio.h>
#include <string.h>

int main(void)
{

    char string[] = "10 \n\t\r\a \0 e2"; 

    printf("the size is %s characters\n", string);
    /* there is a null character*/
    
    return(0);
}