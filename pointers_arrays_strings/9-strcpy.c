#include <stdio.h>
#include "main.h"

/**
 * _strcpy - funcion
 * @dest: variable
 * @src: variable
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);
}
