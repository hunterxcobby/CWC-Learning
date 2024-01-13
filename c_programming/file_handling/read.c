#include <stdio.h>

int main(void)
{   /* declare your file pointer*/
    
    FILE *fptr;
    char buffer[100]; /*store contents in a buffer*/

    /* open the file in the mode you want*/
    fptr = fopen("file.txt", "r");
    if (fptr == NULL)
    {
        printf("Error: file not found\n");
        printf("Creating the file\n");
        fptr = fopen("file.txt", "w");

        fprintf(fptr, "Some text\n");
        fgets(buffer, 100, fptr);

    }

    fgets(buffer, 100, fptr);

    printf("%s", buffer);

    /* close the file*/
    fclose(fptr);
    return (0);
}