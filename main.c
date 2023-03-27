#include "main.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, world!";
    int num = 123;

    _printf("The string is: %s\n", str);
    _printf("The number is: %d\n", num);
    _printf("A percent sign: %%\n");

    return 0;
}

