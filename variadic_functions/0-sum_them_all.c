#include "variadic_functions.h"
/**
 * sum_them_all - funcion variadica
 * @n: entero constante
 * Return: 0
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numeros;
	unsigned int i = 0;
	int suma = 0;

	if (n != 0)
	{
		va_start(numeros, n);
		while (i < n)
		{
			suma += va_arg(numeros, int);
			i++;
		}
		va_end(numeros);
		return (suma);
	}
	return (0);
}
