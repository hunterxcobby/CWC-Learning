#include <stdio.h>

int main (void)
{
    /* declare your file pointer*/
    FILE *fptr;

    fptr = fopen("file.txt", "w");
    printf("Creating file\n");

    /* close the file*/
    fclose(fptr);

    return 0;
}
