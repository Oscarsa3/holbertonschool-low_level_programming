#include <stdio.h>
#include "main.h"

/**
 * _strlen - funcion 1
 * @s: variable
 * Return: retorna i en la funcion _strlen
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
/**
 * rev_string - funcion
 * @s: variable
 * Return: nada
 */
void rev_string(char *s)
{
	int i = 0;
	int a = _strlen(s) - 1;
	char n;

	while (a >= i)
	{
		n = s[a];
		s[a] = s[i];
		s[i] = n;
		a--;
		i++;
	}
}
