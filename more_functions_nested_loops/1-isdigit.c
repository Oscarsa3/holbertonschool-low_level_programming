#include <stdio.h>
#include "main.h"

/**
 * _isdigit - funcion
 *
 * @c: variable
 *
 * Return: 1 si es un digito, 0 si no lo es
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
