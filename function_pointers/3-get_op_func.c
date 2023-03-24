#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - funcion que retorna un puntero a funcion
 * @s: string op
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
