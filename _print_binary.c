#include "main.h"
/**
* _print_binary - prints an unsigned integer as a binary string to stdout
* @n: the unsigned integer to print
* Return: the number of characters printed
*/
int _print_binary(unsigned int n)
{
char buffer[33];
int count = 0, i;
for (i = 0; n > 0; ++i, n >>= 1)
buffer[i] = (n & 1) ? '1' : '0';
if (i == 0)
buffer[i++] = '0';
while (i-- > 0)
putchar(buffer[i]), ++count;
return (count);
}
