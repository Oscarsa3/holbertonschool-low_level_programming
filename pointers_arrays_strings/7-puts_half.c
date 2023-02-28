#include <stdio.h>
#include "main.h"

/**
 * puts_half - funcion
 * @str: puntero
 * Return: nada
 *
 */
void puts_half(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	i = i / 2;
	str = str - i;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
