#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - funcion
 * @i: variable.
 * Return: ultimo valor de cada digito.
 */
int print_last_digit(int i)
{
	if (i < 0)
	i = i * -1;
	_putchar((i % 10) + '0');
		return (i % 10);
}
