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
	unsigned int i = 0;
	int *a;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
