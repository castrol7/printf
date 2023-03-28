#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
int _print_binary(unsigned int n);
int _print_int(int n);
int _print_string(char *str);
int _print_char(char c);
int _printf(const char *format, ...);
#endif /* MAIN_H */
