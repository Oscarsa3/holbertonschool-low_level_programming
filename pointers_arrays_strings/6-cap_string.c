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
	int a = 1;

	while (*str != '\0')
	{
		if (a == 1 && *str >= 'a'  && *str <= 'z')
		{
			*str -= 32;
			a = 0;
		}
		else
		{
			a = 0;
		}
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
