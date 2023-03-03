#include <stdio.h>
#include "main.h"

/**
 *
 */
int _atoi(char *s)
{
	int i = 1;
	long int a = 0;

	do
	{
		if (*s == '-')
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			a = ((a * 10) + (*s - '0'));
		}
	
	}
	while (*s++);
	return (a * i);
}
