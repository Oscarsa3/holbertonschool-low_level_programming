#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - funcion
 * @name: string
 * @f: puntero a funcion
 * Return: nada
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
