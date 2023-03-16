#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - funcion
 * @str: puntero
 * Return:0
 */
char *_strdup(char *str)
{
	int i = 0;
	int a = 0;
	char *du;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	du = malloc(sizeof(char) * (i + 1));
	if (du == NULL)
	{
		return (NULL);
	}
	while (str[a])
	{
		du[a] = str[a];
		a++;
	}
	du[a + 1] = 0;
	return (du);
}
