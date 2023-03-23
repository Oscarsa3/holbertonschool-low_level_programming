#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - funcion
 * @d: puntero a la estructura
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)\n");
	}

}
