#include <stdio.h>

int main(void)
{
    char student_Name[50];
    int age;
    char residence[50];

	printf("This is a school registration form\n");

    printf("Name:");
    scanf("%[^\n]%*c", student_Name);/*  Escape sequence*/
    printf("student name is %s\n", student_Name);

    printf("Age:");
    scanf("%d", &age);
    printf("Age is %d\n", age);

	return(0);
}