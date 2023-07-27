#ifndef _MAIN_H_
#define _MAIN_H_
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<limits.h>
int _putchar(char c);
int print_string(char *str);
void format_specifier(va_list argument, char spec, int *i);
int _printf(const char *format, ...);
int print_binary(unsigned int num);
int my_strlen(const char *str);
int print_id(int a);
char *rot13(char *str);
#endif
