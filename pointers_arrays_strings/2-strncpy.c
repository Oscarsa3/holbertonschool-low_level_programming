#include <stdio.h>
#include "main.h"

/**
 * _strncpy - funcion
 * @dest: destino
 * @src: lo que se copiará
 * @n: tamaño que se copiara
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;
	int co;

	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	for (co = 0; co < n && src[co] != '\0'; co++)
	{
		if (*dest == '\0' && *src == '\0')
		{
			return (dest);
		}
		dest[co] = src[co];
	}
	for (; co < n; co++)
	{
		dest[co] = '\0';
	}
	return (dest);
}
