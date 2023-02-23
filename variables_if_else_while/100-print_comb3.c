#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int p = '0';
	int s = '0';

	for (p = '0'; p < '9'; p++)
	{
		for (s = p + 1; s <= '9'; s++)
		{
		if (s != p)
		{
			putchar(p);
			putchar(s);

			if (p == '8' && s == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
