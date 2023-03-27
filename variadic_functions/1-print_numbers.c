#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - funcion que imprime numeros
 * @separator: char separador
 * @n: argumentos
 * Return: 0
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numeros;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(numeros, n);
		while (i < n)
		{
			printf("%d", va_arg(numeros, int));
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
			i++;
		}
		va_end(numeros);
	}
	printf("\n");
}
