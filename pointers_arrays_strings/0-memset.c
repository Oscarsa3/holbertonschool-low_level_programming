#include <stdio.h>
#include "main.h"

/**
 * _memset - funcion
 * @s: puntero
 * @b: variable
 * @n: variable
 * Return: puntero
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
