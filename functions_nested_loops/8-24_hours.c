#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - funcion
 *
 * Return: nada
 */
void jack_bauer(void)
{
	int ho, min;

	for (ho = 0; ho < 24; ho++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((ho / 10) + '0');
			_putchar((ho % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
