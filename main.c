#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
unsigned int y;
float pi;
x =42;
y =255;
pi = 3.1415926535;
_printf("x = %d\n", x);
_printf("y = %u\n", y);
_printf("pi = %f\n", pi);
_printf("Binary of y = ");
_print_binary(y);
_printf("\n");
_printf("Hello, world!\n");

return( 0);
}
