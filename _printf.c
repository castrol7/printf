#include <stdarg.h>
#include <stdio.h>

/**
* _printf - prints output according to a format
* @format: the format string
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;

va_start(args, format);

	int count = 0;

for (; *format; ++format)
{
if (*format != '%')
putchar(*format), ++count;
else
switch (*++format)
{
case 'c':
putchar(va_arg(args, int)), ++count;
break;
case 's':
count += printf("%s", va_arg(args, char *));
break;
case '%':
putchar('%'), ++count;
break;
default:
putchar('%'), putchar(*format), count += 2;
break;
}
}
va_end(args);
return (count);
}

