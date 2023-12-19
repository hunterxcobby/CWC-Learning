#include <stdio.h>

char *greeting(char student1[]);

int main(void) /* the entry point*/
{
    char *name;
    char student1[] = "Akwesi";

    name = greeting(student1);
    printf("The function is returning %s\n", name);


    return(0);
}


char *greeting(char student1[])
{
    printf("Good morning, %s\n",student1);

    return (student1);

}