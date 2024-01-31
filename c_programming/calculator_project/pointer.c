#include <stdio.h>

void modify(int *name);

int main (void)
{
    int number = 5;
    int *ptr = &number;

    /*printf("%d\n", number);*/
    printf("This is the memory address before passing it to the fucntion  %p\n", &number);


    modify(ptr);

    number = 20;
    /*printf("This is the modified value = %d\n", number);*/
    printf("This is the memory address after passing it to the function  %p\n", &number);



    return (0);
}



void modify(int *name)
{
    *number = 10;
    printf("This is the memory address when it is in the function %p\n", &number);

    /*printf("After passing the number to the function %d\n", number);*/
}
