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
		putchar(*str);
	}
	putchar('\n');
}
