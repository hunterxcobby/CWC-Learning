#include <stdio.h>

void greeting(char name1[], char name2[], char name3[]);

int main(void) /* the entry point*/
{
    char student1[] = "Akwesi";
    char student2[] = "Diana";
    char student3[] = "Kelvin";

    greeting(student1, student2, student3);

    return(0);
}


void greeting(char student1[], char student2[], char student3[])
{
    printf("Good morning, %s , %s and %s\n",student1, student2, student3);

}