#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always: 0
 */
int main(void)
{
	int a;
	unsigned long int b = 0, c = 1, d;

	for (a = 1; a <= 98; a++)
	{
		d = b + c;
		if (a != 98)
		{
			printf("%lu, ", d);
		}
		else
		{
			printf("%lu\n", d);
		}
		b = c;
		c = d;
	}
	return (0);
}
