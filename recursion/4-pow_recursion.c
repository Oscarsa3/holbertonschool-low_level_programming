#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - funcion
 * @x: numero
 * @y: potencia
 * Return: potencia de un numero
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
