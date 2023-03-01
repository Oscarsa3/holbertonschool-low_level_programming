#include <stdio.h>
#include "main.h"

/**
 * _strcat - funcion
 * @dest: puntero 1
 * @src: puntero 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;
	int co;

	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	for (co = 0; co <= s; co++)
	{	dest[d] = src[co];
		d++;
	}
	return (dest);
}
