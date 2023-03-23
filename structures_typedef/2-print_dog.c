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
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner)
		{
			printf("owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
	else
	{
		return;
	}

}
