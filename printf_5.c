#include <stdio.h>
#include <stdarg.h>
/**
* print_custom - custom implementation of printf function
* that supports "%S". Prints string with non-printable ASCII
* characters as hexadecimal value of the ASCII code.
* @format: format string and additional arguments.
* Return: void.
*/
void print_custom(const char *format, ...)
{
va_list args;
va_start(args, format);

for (const char *p = format; *p != '\0'; ++p)
{
if (*p == '%')
{
switch (*(++p))
{
case 'S':
{
char *str = va_arg(args, char *);
char new_str[1024] = {0};
for (int i = 0, j = 0; str[i] != '\0'; ++i, ++j)
{
if ((str[i] < 32 && str[i] > 0) || str[i] == 127)
sprintf(new_str + j, "\\x%02X", str[i]);
else
new_str[j] = str[i];
}
printf("%s", new_str);
break;
}
default:
putchar(*p);
break;
}
}
else
putchar(*p);
}
va_end(args);
}
/**
* main - entry point for program
* Return: 0 on success
*/
int main(void)
{
char *str = "Hello, \x0A world!\x7F";
print_custom("Custom: %S\n", str);
printf("Regular: %s\n", str);
return (0);
}

