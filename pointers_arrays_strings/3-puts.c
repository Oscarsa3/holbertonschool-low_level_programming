#include <stdio.h>
#include "main.h"

/**
 * _puts - funcion
 *
 * @str: variable
 */
void _puts(char *str)
{
	for (str = 0; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
