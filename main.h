#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
char buffer[BUFFER_SIZE];
char *str = va_arg(args, char *);
char new_str[1024] = {0};
int _printf(const char *format, ...);
#endif /* MAIN_H */
