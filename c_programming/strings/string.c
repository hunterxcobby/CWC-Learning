#include <stdio.h>
#include <string.h>

int main(void)
{

    char name[] = "Diana";

    printf("the size is %lu characters\n", sizeof(name));
    /* there is a null character*/
    
    return(0);
}