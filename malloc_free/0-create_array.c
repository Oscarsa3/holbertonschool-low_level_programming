#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - funcion
 * @*a: puntero
 * @size: tamaño
 * @c: tipo
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
