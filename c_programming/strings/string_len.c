#include <stdio.h>
#include <string.h>

int main(void)
{

    char name[1024];
    printf("Enter your name:\n");

    scanf("%s", name);

    if (strlen(name) != 15)
    {
        printf("Please enter a name with 15 characters\n");
    }
    // printf("%ld\n", strlen(name));
    // printf("%lu\n", sizeof(name));
    
    free(name);
    return(0);
}