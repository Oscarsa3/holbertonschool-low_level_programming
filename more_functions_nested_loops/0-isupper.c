#include <stdio.h>
#include "main.h"

/**
 * _isupper - funcion
 * @c: caracteres
 * Return: 1 si es mayuscula y 0 si es minusucla
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
