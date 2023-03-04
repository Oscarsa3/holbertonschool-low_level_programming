#include <stdio.h>
#include "main.h"

/**
 * leet - funcion
 * @s: variable
 * Return: s
 *
 */
char *leet(char *s)
{
	int i = 0, c = 5;
	int a;
	char e[5] = {'A', 'E', 'O', 'T', 'L'};
	char f[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		a = 0;
		while (a < c)
		{
			if (s[i] == e[a] || s[i] - 32 == e[a])
			{
				s[i] = f[a];
			}
			a++;
		}
		i++;
	}
	return (s);
}
