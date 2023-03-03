#include <stdio.h>
#include "main.h"

/**
 * cap_string - funcion
 * @str: variable
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' ||
		*str == ',' || *str == ';' || *str == '.' || *str == '!' ||
		*str == '?' || *str == '"' || *str == '(' || *str == ')' ||
		*str == '{' || *str == '}')
		{
			i = 1;
		}
		else
		{
			if (i == 1)
			{
				if (*str >= 'a' && *str <= 'z')
					*str = *str - 32;
				i = 0;
			}
		}
		str++;
	}
	return (str);
}
