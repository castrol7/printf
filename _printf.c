#include "main.h"
/**
* _printf - prints output according to a format string
* @format: the format string
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

for (; *format; ++format)
{
if (*format != '%')
count += _print_char(*format);
else
{
switch (*++format)
{
case 'c':
count += _print_char(va_arg(args, int));
break;
case 's':
count += _print_string(va_arg(args, char *));
break;
case 'd':
case 'i':
count += _print_int(va_arg(args, int));
break;
case 'b':
count += _print_binary(va_arg(args, unsigned int));
break;
case '%':
count += _print_char('%');
break;
default:
count += _print_char('%');
count += _print_char(*format);
break;
}
}
}
va_end(args);
return (count);
}
