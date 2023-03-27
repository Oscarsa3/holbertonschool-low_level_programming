#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - funcion que imprime cadenas
 * @separator: separador entre las palabras
 * @n: las palabras
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list palabras;
	unsigned int i = 0;
	char *cadena;

	if (n > 0)
	{
		va_start(palabras, n);
		while (i < n)
		{
			cadena = va_arg(palabras, char *);
			if (cadena == NULL)
			{
				printf("%s", "(nil)");
			}
			else
			{
				printf("%s", cadena);
			}
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
			i++;
		}
		va_end(palabras);
	}
	printf("\n");
}
