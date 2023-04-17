#include "main.h"
/**
  * set_bit - establece el valor de  un bit en un indice dado
  * @n: numero
  * @index: indice
  * Return: valor
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(size_t) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
