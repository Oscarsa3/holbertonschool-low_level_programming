#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * @b: caracter a testear.
 * Return: return 1 si es minuscula, si no return 0
 */
int _islower(int b)
{
	if (b >= 'a' && b <= 'z')
	{
		return (1);
	}
	return (0);
}
