#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
* _printf - print output according to a format
* @format: the format string
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int num_chars_printed = 0;
	const char *p = format;

	va_start(args, format);

	while (*p)
	{
		if (*p == '%')
		{
			p++; /* move past the '%' */
			if (*p == 'd' || *p == 'i')
			{
				int num = va_arg(args, int);
				num_chars_printed += printf("%d", num);
			}
			else
			{
				putchar(*p);
				num_chars_printed++;
			}
		}
		else
		{
			putchar(*p);
			num_chars_printed++;
		}

		p++;
	}

	va_end(args);

	return num_chars_printed;
}

