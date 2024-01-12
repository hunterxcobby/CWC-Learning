#include <stdio.h>

typedef struct Book {
    char title[100];
    char author[50];
    int publicationYear;
}book;

int main (void)
{
    int i;

    /* declare an array of books*/
    book library[4];

    for(i=0; i < 4; i++)
    {
        printf("Enter the details of the book %d:\n", i + 1);

        printf("\n");
        
        printf("Title: ");
        scanf("%s", library[i].title);

        printf("Author: ");
        scanf("%s", library[i].author);


        printf("Publication Year: ");
        scanf("%d", &library[i].publicationYear);

        printf("\n");


    }

    /* DIsplay the information for each book in the array */
    printf("Library Contents:\n");

    for (i=0; i < 4; i++)
    {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Publication Year: %d\n", library[i].publicationYear);

    }

    return(0);
}