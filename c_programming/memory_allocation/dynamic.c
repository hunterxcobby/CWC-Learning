#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *name;
    int inputlength;

    name = malloc(100 * sizeof(char));
    if(name == NULL)
    {
        printf("Memory allocation failed!\n");
        return (1);
    }

    scanf("%s", name);
    printf("%s\n", name);
    inputlength = strlen(name);


    if (inputlength == 5 - 1)
    {
        name = realloc(name, 200 * sizeof(char));
        if (name == NULL)
        {
            printf("Memory re-allocation failed\n");
            return(1);
        }
    }



    free(name);
    return (0);
}