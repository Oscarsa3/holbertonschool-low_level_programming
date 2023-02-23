#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char min = 'a';
	char man = 'A';

	while (min >= 'z')
	{
		putchar(min);
		min++;
	}
	while (man >= 'Z')
	{
		putchar(man);
		man++;
	}
	putchar('\n');
	return (0);
}
