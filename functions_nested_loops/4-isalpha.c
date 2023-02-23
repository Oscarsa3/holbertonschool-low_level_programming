#include <stdio.h>
#include "main.h"

/**
 *  _isalpha - fuarda el resultado
 * @c: caracteres para testear.
 *  Return: 1 si es minuscula o mayuscula, sino 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
