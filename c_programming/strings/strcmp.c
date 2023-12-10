#include <stdio.h>
#include <string.h>

int main(void)
{
    
    char str1[] = "Kelvin";
    char str2[] = "Diana";
    char str3[] = "Kelvin";

    printf("%d\n", strcmp(str1, str2));
    /* any other number because they are not equal*/
    printf("%d\n", strcmp(str1, str3));
    /* 0 because they are equal*/

    return(0);
}