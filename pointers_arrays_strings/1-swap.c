#include <stdio.h>
#include "main.h"

/**
 * swap_int - funcion
 * @a: variable.
 * @b: variable.
 * Return: nada
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
