#include "main.h"
/**
* _print_string - prints a string to stdout
* @str: the string to print
* Return: the number of characters printed
*/
int _print_string(char *str)
{
int count = 0;
while (*str)
{
putchar(*str++);
++count;
}
return (count);
}
