#include <stdio.h>
#include "main.h"

/**
 * _atoi - funcion
 * @s: variable
 * Return: a*i
 */
int _atoi(char *s)
{
	int i = 1;
	int a = 0;

	do {
		if (*s == '-')
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			a = ((a * 10) + (*s - '0'));
		}
		else if (a > 0)
			break;
	} while (*s++);
	return (a * i);
}
