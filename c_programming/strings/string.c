#include <stdio.h>
#include <string.h>

char *concatenateStrings(char name[], char name1[]);

int main(void)
{

    char name[25];
    char name1[25];
    char box[50];

    printf("Enter the first string:");
    scanf ("%s",name);

    printf("Enter the second string:");
    scanf ("%s",name1);

    box = concatenateStrings(name, name1);
    printf("%s", box);

    return(0);
}


char *concatenateStrings(char name[], char name1[])
{
    char *result;
    /** 
     * concatenate name1 to name
     *results is stored in name
     */
    result = strcat(name, name1);

    return (result);
}