#include <stdio.h>
#include <string.h>

int main(void)
{
    
    char password[] = "batman123";
    char input[20];

    printf("Enter your password:");

    scanf("%s", input);

    if(strcmp(password, input) == 0)
    {
        printf("Password Correct\n");
    }
    else
    {
        printf("Incorrect Password\n");

    }
    return(0);
}