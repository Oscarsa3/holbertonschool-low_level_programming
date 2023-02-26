#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Funcion
 *
 * @size: variable
 * Return: nada
 *
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
			{
				_putchar(' ');
			}
			for (c = 0; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
