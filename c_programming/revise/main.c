#include <stdio.h>

int main(int argc, char *argv[])
{   
    printf("%d arguments\n", argc);

    printf("%s\n", argv[0]);
    printf("hello, %s and %s\n", argv[1], argv[2]);
    return (0);
}