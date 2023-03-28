#include "main.h"
/**
* _print_int - prints an integer to stdout
* @n: the integer to print
* Return: the number of characters printed
*/
int _print_int(int n)
{
char buffer[20];
int count = 0;
sprintf(buffer, "%d", n);
while (buffer[count])
putchar(buffer[count++]);
return (count);
}
