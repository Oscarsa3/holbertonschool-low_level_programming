#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char re = 'z';

	while (re >= 'a')
	{
		putchar(re);
		re--;
	}
	putchar('\n');
	return (0);
}
