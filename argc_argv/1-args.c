#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: cantidad de argumentos
 * @argv: Argumentos
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
