#include <stdio.h>
#include "main.h"
/**
 * _strcmp - funcion
 * @s1: primera entrada
 * @s2: segunda entrada
 * Return: resta del 2 con el 1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
