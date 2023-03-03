#include <stdio.h>
#include "main.h"

/**
 * reverse_array - funcion
 * @a: puntero
 * @n: variable
 */
void reverse_array(int *a, int n)
{
	int b;
	int i;
	int c = n - 1;

	for (i = 0; i < c; i++)
	{
		b = a[i];
		a[i] = a[c];
		a[c] = b;
		c--;
	}
}
