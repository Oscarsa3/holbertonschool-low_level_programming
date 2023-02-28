#include <stdio.h>
#include "main.h"

/**
 * puts2 - funcion
 * @str: variable entrante
 * Return: nada
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
