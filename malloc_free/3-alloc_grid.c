#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - funcion
 * @width: ancho
 * @height: alto
 * Return: matriz
 *
 */
int **alloc_grid(int width, int height)
{
	int **ma;
	int i;
	int a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ma = malloc(sizeof(int) * height);
	if (ma == NULL)
	{
		free(ma);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ma[i] = malloc(sizeof(int) * width);
		if (ma == NULL)
		{
			free(ma);
			return (NULL);
		}
		for (a = 0; a < width; a++)
		{
			ma[i][a] = 0;
		}
	}
	return (ma);
}
