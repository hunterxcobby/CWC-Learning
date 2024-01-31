#include <stdio.h>
#include <stdlib.h>

int main(source , destination)
{
    /* declare your file pointer*/
    FILE *fptr;
    char buffer[100]; /*store contents in a buffer*/

     /* open the file in the mode you want*/
    fptr = fopen("source.txt", "r");
    if (fptr == NULL)
    {
        printf("Error: file not found\n");
        printf("Please add a file for me to copy from\n");
        exit(-1); /* convention*/
    }

    fptr = fopen("destination.txt", "w");

    if (!fptr)
    {
        printf("Creating the file\n");
        fprintf(fptr, "My name is Cobby\n");
        fgets(buffer, 100, fptr);
    }

    fgets(buffer, 100, fptr);

     printf("%s", buffer);

    /* open the file in the mode you want*/
    fptr = fopen("destination.txt", "w");
    printf("Creating file\n"); 

    /* write into the file*/
    fprintf(fptr, "My name is Cobby\n");

   /* close the file*/
    fclose(fptr);
    return (0);
}
