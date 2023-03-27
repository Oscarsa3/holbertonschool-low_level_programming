#ifndef HEADER
#define HEADER
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void all_char(va_list a);
void all_int(va_list a);
void all_float(va_list a);
void all_string(va_list a);
typedef struct alls
{
	char *all;
	void (*f)(va_list a);
} all_a;
#endif
