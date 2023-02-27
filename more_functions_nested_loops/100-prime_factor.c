#include <stdio.h>

/**
 *  main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int a, n = 612852475143;

	for (a = 3; a < 12057; a += 2)
	{
		while (n % a == 0 && n != a)
			n /= a;
	}
	printf("%lu\n", n);
	return (0);
}
