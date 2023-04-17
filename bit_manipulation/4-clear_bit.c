#include "main.h"
/**
  * clear_bit - establece el valor de un bit en 0
  * @n: numero
  * @index: indice
  * Return: 1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(size_t) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
