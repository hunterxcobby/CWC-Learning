#include <stdio.h>

int main (void)
{
    char first_name[50];

    printf("First name:\n");
    fgets(first_name, sizeof(first_name), stdin);

    printf("%s", first_name);
    return (0);
}