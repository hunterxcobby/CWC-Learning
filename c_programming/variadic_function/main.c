#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    printf("This is count %d\n", argc);


    for (i = 0; i < argc; i++)
    {
        printf("THese are the arguments %s\n", argv[i]);
    }
    return (0);
}