#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - funcion
 * @n: numero para ver si es primo
 * Return: funcion para verificar si es primo
 */
int is_prime_number(int n)
{
	return (nprimo(n, 1));
}
/**
 * nprimo - funcion calcula si es primo
 * @a: numero para ver si es primo
 * @b: divisor para calcular
 * Return: o si no es, 1 si es primo
 */
int nprimo(int a, int b)
{
	if (a <= 1)
		return (0);
	if (a % b == 0 && b > 1)
		return (0);
	if ((a / b) < b)
		return (1);
	return (nprimo(a, b + 1));
}
