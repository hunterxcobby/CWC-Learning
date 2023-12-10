#include <stdio.h>
#include <string.h>

int main(void)
{
    char maiden_name[50];
    char name[] = "Diana Velmah";

    strcpy(maiden_name, name);

    printf("%s\n", name);
    printf("%s\n", maiden_name);
    
    return(0);
}