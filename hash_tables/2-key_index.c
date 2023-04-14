#include "hash_tables.h"
/**
  * key_index - da el indice de un key
  * @key: clave
  * @size: tamaño
  * Return: indice
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size <= 0)
		return (0);
	return (hash_djb2(key) % size);
}
