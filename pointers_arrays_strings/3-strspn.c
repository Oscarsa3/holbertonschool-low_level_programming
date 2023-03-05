#include <stdio.h>
#include "main.h"

/**
 * _strspn - funcion
 * @s: puntero
 * @accept: puntero
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, i = 0;

	while (accept[a])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				i++;
			}
			b++;
		}
		a++;
	}
	return (i);
}
