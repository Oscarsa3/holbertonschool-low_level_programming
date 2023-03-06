#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - funcion
 * @s: puntero
 * Return: total de la longitud
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
