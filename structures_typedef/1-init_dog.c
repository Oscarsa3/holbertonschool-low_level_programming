#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - funcion
 * @d: puntero para inicializar
 * @name: nombre
 * @age: años
 * @owner: owner
 * Return: nada
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
