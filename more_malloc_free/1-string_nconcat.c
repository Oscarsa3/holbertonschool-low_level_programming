#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - funcion para concatenar
 * @s1: primer string
 * @s2:segundo string
 * @n: cantidad de bytes a concatenar
 * Return: string concatenado
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int b = 0;
	unsigned int c, d;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[b])
	{
		b++;
	}
	if (b > n)
	{
		b = n;
	}
	b += i;
	a = malloc(sizeof(char *) * (b + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < i; c++)
	{
		a[c] = s1[c];
	}
	for (d = 0; c < b; d++)
	{
		a[c] = s2[d];
		c++;
	}
	c++;
	a[c] = '\0';
	return (a);

}
