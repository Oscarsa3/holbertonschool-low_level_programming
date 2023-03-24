#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - funciom
 * @array: array
 * @size: tmaño de la matriz
 * @action: puntero a funcion
 * Return: nada
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
