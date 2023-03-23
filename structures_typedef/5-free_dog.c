#include <stdlib.h>
#include "dog.h"
/**
 * void free_dog - funcion
 * @d: puntero a la estructura
 * Return: nada
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
