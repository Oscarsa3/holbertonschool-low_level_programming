#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Funcion
 *
 * @n: variable
 *
 * Return: nada
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		if (n == 98)
		{
			printf("98\n");
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		if (n == 98)
		{
			printf("98\n");
		}
	}
}
