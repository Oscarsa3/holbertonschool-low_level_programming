#include "hash_tables.h"
/**
  * hash_table_create - crea una tabla hash
  * @size: tamaño de la tabla
  * Return: puntero a la tabla
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *rtn;

	rtn = malloc(sizeof(hash_table_t));
	if (rtn == NULL)
		return (NULL);
	rtn->size = size;
	rtn->array = malloc(sizeof(hash_node_t *) * size);
	if (rtn->array == NULL)
	{
		free(rtn);
		return (NULL);
	}
	return (rtn);
}
