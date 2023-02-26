#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - funcion
 * @i: variable.
 * Return: ultimo valor de cada digito.
 */
int print_last_digit(int i)
{
	int u;

	u = i % 10;

	if (u < 0)
	{
		u = u * -1;
	}
	_putchar(u + '0');
	return (u);
}
