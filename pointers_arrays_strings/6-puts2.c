#include <stdio.h>
#include "main.h"

/**
 * puts2 - funcion
 * @str: variable entrante
 * Return: nada
 */

void puts2(char *str)
{
	for (; (*str % 2 == 0 && *str != '\0'); str++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
