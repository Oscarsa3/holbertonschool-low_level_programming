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
	char *o = argv[2];
	int (*resul)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*o != '+' && *o != '-' && *o != '*' && *o != '/' && *o != '%')
			|| *(o + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	resul = get_op_func(argv[2]);
	ope = (*resul)(a, b);
	printf("%d\n", ope);
	return (0);
}
