#include <stdio.h>
#include "main.h"

/**
 * print_line - funcion
 * @n: variable
 *
 * Return: guion bajo o salto de linea
 *
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; n > a; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
