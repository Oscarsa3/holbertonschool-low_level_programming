#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - funcion que imprime de todo
 * @format: tipo de argumento
 * @*: string
 * Return: nada
 *
 */
void print_all(const char * const format, ...)
{
	all_a tipos[] = {
		{"c", all_char},
		{"i", all_int},
		{"f", all_float},
		{"s", all_string},
		{NULL, NULL}
	};
	int z = 0;
	int i = 0;
	va_list a;
	char *sepa = "";

	va_start(a, format);
	while (format && format[z])
	{
		while (tipos[i].all)
		{
			if (format[z] == *tipos[i].all)
			{
				printf("%s", sepa);
				tipos[i].f(a);
				sepa = ", ";
			}
			i++;
		}
		i = 0;
		z++;
	}
	printf("\n");
	va_end(a);
}
/**
 * all_char - funcion
 * @a: va_list
 * Return: nada
 */
void all_char(va_list a)
{
	printf("%c", va_arg(a, int));
}
/**
 * all_int - funcion
 * @a: va_list
 * Return: nada
 */
void all_int(va_list a)
{
	printf("%i", va_arg(a, int));
}
/**
 * all_float - funcion
 * @a: va_list
 * Return: nada
 */
void all_float(va_list a)
{
	printf("%f", va_arg(a, double));
}
/**
 * all_string - funcion
 * @a: va_list
 * Return: nada
 */
void all_string(va_list a)
{
	char *st;

	st = va_arg(a, char *);
	if (st == NULL)
	{
		st = "(nil)";
	}
	printf("%s", st);
}
