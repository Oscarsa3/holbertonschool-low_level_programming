#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - funcion.
 *
 * @n: variable resultado.
 *
 * Return: nothing.
 */
void print_diagonal(int n)
{
	int a;
	int x;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (x = 0; x < a; x++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
