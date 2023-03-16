#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - funcion
 * @s1:string 1
 * @s2: string 2
 * Return: string concatenado
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i = 0;
	int a= 0;
	int b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	ar = malloc(sizeof(char) * (a + b + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	while (*s1)
	{
		ar[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		ar[i] = *s2;
		i++;
		s2++;
	}
	return (ar);
}
