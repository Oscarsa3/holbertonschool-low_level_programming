#include "main.h"
/**
  * flip_bits - cantidad de bits para cambiar un numero a otro
  * @n: numero
  * @m: numero 2
  * Return: cantidad de bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t i = n ^ m, b = 0;

	while (i > 0)
	{
		b += (i & 1);
		i >>= 1;
	}
	return (b);
}
