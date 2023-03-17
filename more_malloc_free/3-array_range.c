#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - funcion
 * @min: minnimo
 * @max: maximo
 * Return: puntero
 *
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *a;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
