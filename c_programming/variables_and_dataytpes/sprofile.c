#include <stdio.h>

int main(void)
{
    char student_Name[50];

	printf("This is a school registration form\n");

    printf("Name:");
    scanf("%[^\n]%*c", student_Name);
    printf("student name is %s\n", student_Name);

	return(0);
}