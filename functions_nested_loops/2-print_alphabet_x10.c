#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char abc;
	int ve;

	for (ve = 0; ve < 10; ve++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar(abc);
		_putchar('\n');
	}
}
