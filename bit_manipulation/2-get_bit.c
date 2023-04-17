#include "main.h"
/**
  * get_bit - retorna el valor de un bit segun el indice
  * @n: numero
  * @index: indice
  * Return: el valor de uyn bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(size_t) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
