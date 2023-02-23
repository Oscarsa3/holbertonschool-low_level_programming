#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
