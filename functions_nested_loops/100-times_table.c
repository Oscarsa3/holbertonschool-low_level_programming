#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Funcion
 *
 * @n: variable
 *
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n < 15)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			
			if (c > 99)
			{
				printf(", %d", c);
			}
			else if (c > 9)
			{
				printf(",  %d", c);
			}
			else
			{
				if (b != 0)
				{
					printf(",   ");
				}
				printf("%d", c);
			}
		}
		printf("\n");
	}
	}
}
