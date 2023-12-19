#include <stdio.h>

void greeting(char name1[], int age);

int main(void) /* the entry point*/
{
    char student1[] = "Akwesi";
    int age = 99;

    greeting(student1, age);

    return(0);
}


void greeting(char student1[], int age)
{
    printf("%s is %d years old\n",student1, age);

}