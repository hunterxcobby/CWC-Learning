#include <stdio.h>
#include <string.h>

int main(void)
{
    
    char name[25] = "dianavelmah";
    char email[] = "@gmail.com";

    /** 
     * concatenate email to name
     *results is stored in name
     */
    strcat(name, email);

    printf("%s\n", name);

    
    return(0);
}