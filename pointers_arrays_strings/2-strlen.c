#include <stdio.h>
#include "main.h"

/**
 * _strlen - funcion
 * @s: variable
 * Return:nada
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
