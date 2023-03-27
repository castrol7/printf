#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
* _printf - prints formatted output to stdout
* @format: a character string containing format directives
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
count += putchar(va_arg(args, int));
break;
case 's':
count += printf("%s", va_arg(args, char *));
break;
case '%':
count += putchar('%');
break;
default:
count += putchar('%') + putchar(*format);
break;
}
}
else
{
count += putchar(*format);
}
format++;
}

va_end(args);
return (count);
}

