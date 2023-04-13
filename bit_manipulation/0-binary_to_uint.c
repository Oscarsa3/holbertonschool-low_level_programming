#include "main.h"
/**
  * binary_to_uint - convierte un binario a entero
  * @b: strin de 0 y 1
  * Return: numero entero o 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binario = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		binario = (binario << 1) + (b[i] - '0');
		i++;
	}
	return (binario);

}
