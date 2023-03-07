#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - funcion
 * @n: numero para calcularle su raiz
 * Return: 0 o llamamos a otra funcion
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (raiz(n, 1));
}
/**
 * raiz - funcion
 * @a: numero para calcularle su raiz
 * @b: numero desde donde empezamos a calcular
 * Return: -1 si no tiene raiz ó b como la raiz
 */
int raiz(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}
	else if (b * b == a)
	{
		return (b);
	}
	else
	{
		return (raiz(a, b + 1));
	}
	return (1);
}
