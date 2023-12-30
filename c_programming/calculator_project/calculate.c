#include "main.h"

int calculate(int num1, int num2, int (*operation)(int num1, int num2))
{
    return (operation(num1, num2));
}