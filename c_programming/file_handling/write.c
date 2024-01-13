#include <stdio.h>

int main (void)
{   /* declare your file pointer*/
    FILE *fptr;

    /* open the file in the mode you want*/
    fptr = fopen("file.txt", "w");

    /* write into the file*/
    fprintf(fptr, "This is some text\n");

    fclose(fptr);
    return (0);
}