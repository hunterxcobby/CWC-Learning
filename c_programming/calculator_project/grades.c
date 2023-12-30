#include <stdio.h>

void update(int *english);
void bonus(int *english);

int main (void)
{
	int english;
	int *ptr = &english;

	printf("Enter your English grade here: \n");
    scanf("%d", &english);

	printf("You had %d in English\n", english);

	update(ptr);
	printf("Your updated grade is %d\n", english);

	bonus(ptr);

	printf("Your new grades with the bonus is %d\n", english);

	return (0);
}

void update(int *english)
{

	printf("Enter your new grade:");
	scanf("%d", english);
}

void bonus(int *english)
{
	*english = *english + 50;
}

