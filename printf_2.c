#include <stdio.h>
#include <stdarg.h>
/**
* _printf - custom implementation of printf
* @format: format string
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			switch (*(++format))
			{
			case 'b':
			{
				unsigned int num = va_arg(args, unsigned int);
				int i, bits = sizeof(num) * 8;
				char buffer[bits + 1];

				for (i = 0; i < bits; ++i)
					buffer[i] = ((num >> (bits - i - 1)) & 1) ? '1' : '0';

				buffer[bits] = '\0';
				printed_chars += printf("%s", buffer);
				break;
			}
			default:
				printed_chars += printf("%%%c", *format);
				break;
			}
		}
		else
		{
			putchar(*format);
			++printed_chars;
		}
		++format;
	}
	va_end(args);
	return (printed_chars);
}

