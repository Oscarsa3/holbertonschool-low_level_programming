#include <stdio.h>
#include "main.h"
/**
 * _strncat - funcion
 * @dest: puntero entrante
 * @src: puntero entrente
 * @n: variable
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;
	int co;

	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	for (co = 0; co < n; co++)
	{
		if (*dest == '\0' && *src == '\0')
		{
			return (dest);
		}
		dest[d] = src[co];
		d++;
	}
	return (dest);
}
