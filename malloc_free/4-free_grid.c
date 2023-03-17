#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - funcion
 * @grid: puntero a puntero
 *
 * @height: altura
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
