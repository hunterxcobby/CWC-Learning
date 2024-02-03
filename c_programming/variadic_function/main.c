#include <stdio.h>

int main(void)
{
    int i;
    printf("This is count %d\n", argc);


    for (i = 0; i < argc; i++)
    {
        printf("THese are the arguments %s\n", argv[i]);
    }
    return (0);
}
