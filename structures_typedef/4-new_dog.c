#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - crea otro perro
 * @name:nombre
 * @age:edad
 * @owner: propietario
 * Return: 0
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nuevo;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	nuevo = malloc(sizeof(dog_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}
	nuevo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (nuevo->name == NULL)
	{
		free(nuevo);
		return (NULL);
	}
	nuevo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (nuevo->owner == NULL)
	{
		free(nuevo->name);
		free(nuevo);
		return (NULL);
	}
	nuevo->name = _strcpy(nuevo->name, name);
	(*nuevo).age = age;
	nuevo->owner = _strcpy(nuevo->owner, owner);
	return (nuevo);
}
/**
 * _strlen - funcion para calcular el espacio
 * @str: string
 * Return: 0
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
/**
 * _strcpy - funcion para copiar un string
 * @dest: copia
 * @src: copiar
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
