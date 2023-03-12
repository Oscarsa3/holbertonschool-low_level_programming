#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 * @argc: cantidad de argumentos
 * @argv: argumentos
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int suma = 0;

	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		suma += atoi(argv[i]);
	}
	printf("%d\n", suma);
	return (0);
}
