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
	unsigned int i;
	unsigned int b = n;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		b++;
	}
	a = malloc(sizeof(char *) * (b + 1));
	if (a == NULL)
	{
		return (NULL);
		free(a);
	}
	b = 0;
	for (i = 0; s1[i]; i++)
	{
		a[b++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		a[b++] = s2[i];
	}
	a[b] = '\0';
	return (a);

}
