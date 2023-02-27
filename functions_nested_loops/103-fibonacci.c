#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always: 0
 */
int main(void)
{
	int a = 0;
	long int b = 1;
	long int c = 2;
	long int d = c;

	while (b + c < 4000000)
	{
		c += b;
		if (c % 2 == 0)
			d += c;
		b = c - b;
	       a++;
	}
	printf("%ld\n", d);
	return (0);
}
