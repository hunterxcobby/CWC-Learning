#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

int add(int num1, int num2);
int mul(int num1, int num2);
int sub(int num1, int num2);
int div(int num1, int num2);
int calculate(int num1, int num2, int (*operation)(int num1, int num2));


#endif