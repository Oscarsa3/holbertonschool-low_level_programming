#include <stdio.h>
#include "main.h"

/**
 * cap_string - funcion
 * @str: variable
 * Return: str
 */
char *cap_string(char *str)
{
	int a = 0, i;
	int ct = 13;
	char ctd[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[a])
	{
		i = 0;

		while (i < ct)
		{
			if ((a == 0 || str[a - 1] == ctd[i]) && (str[a] >= 'a' && str[a] <= 'z'))
			{
				str[a] -= 32;
			}
			i++;
		}
		a++;
	}
	return (str);
}
