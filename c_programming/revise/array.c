#include <stdio.h>

void main2(int *copy1);
void main3(int *copy2);


int main(void)
{
    int a = 21;
    int *ptr = &a;

    printf("a is %d\n", a);
    main2(ptr);
    main3(ptr);

    return(0);
}


void main2(int *copy1)
{
    int a = *copy1;

    printf("memory is %p\n", &copy1);

    printf("a is %d\n", d);

    *copy1 = 40;
}

void main3(int *copy2)
{
    int a = *copy2;

    printf("memory is %p\n", copy2);

    printf("a is %d\n", a);

}