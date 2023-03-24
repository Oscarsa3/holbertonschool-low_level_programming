#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main -entry point
 * @argc: cantidad de argumentos
 * @argv: valor de los argumentos
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, ope;
	int (*resul)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	resul = get_op_func(argv[2]);
	if (resul == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	ope = (*resul)(a, b);
	printf("%d\n", ope);
	return (0);
}
