#include <stdio.h>
#include "main.h"
/**
 * print_array - funcion
 * @a: variable
 * @n: variable
 * Return: nada
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < (n - 1))
	{
		printf("%d, ", *a);
			i++;
			a++;
	}
	printf("%d\n", *a);
}
