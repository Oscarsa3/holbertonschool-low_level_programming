#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char vo = 'a';

	while (vo <= 'z')
	{
		if (vo != 'q' && vo != 'e')
	{
		putchar(vo);
	}
		vo++;
	}
	putchar('\n');
	return (0);
}
