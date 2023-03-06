#include <stdio.h>
#include "main.h"

/**
 * factorial - funcion
 * @n: variable donde indicamos un numero
 * Return: factorial de n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
