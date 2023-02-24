#include <stdio.h>
#include "main.h"

/**
 * print_sign - guarda el resultado
 * @n: caracteres para testear.
 * Return: 1 si es mayor que cer
 * 0 si es igual a cero
 * -1 si es menor que cero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return ('/');
}
