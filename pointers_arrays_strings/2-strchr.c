#include <stdio.h>
#include "main.h"

/**
 * _strchr - funcion
 * @s: puntero
 * @c: variable
 * Return: null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
