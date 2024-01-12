#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// defining a structure called person 
typedef struct person {

    // members (fields) of the structure
    char name[50];
    char sex;
    int age;
    float height;
    bool isProgrammer;
}profile;


int main(void)
{
    profile kelvin;
    profile Akwesi;

    // assign values to our structure
    strcpy(Akwesi.name, "Akwesi Owusu");
    Akwesi.age = 30;
    Akwesi.sex = 'M';
    Akwesi.height = 50.5;
    Akwesi.isProgrammer = false;

    // access that values or information
    printf("Name: %s\n", Akwesi.name);
    printf("Age: %d\n", Akwesi.age);
    printf("Name: %.2f\n", Akwesi.height);
    printf("Gender: %c\n", Akwesi.sex);
    printf("IsProgrammer?: %d\n", Akwesi.isProgrammer);

    // assign values to our structure 
    strcpy(kelvin.name, "Kelvin Nyantakyi");
    kelvin.age = 21;
    kelvin.height = 23.5;
    kelvin.sex = 'M';
    kelvin.isProgrammer = true;


    // access that values or information
    printf("Name: %s\n", kelvin.name);
    printf("Age: %d\n", kelvin.age);
    printf("Name: %.2f\n", kelvin.height);
    printf("Gender: %c\n", kelvin.sex);
    printf("IsProgrammer?: %d\n", kelvin.isProgrammer);





    return (0);
}