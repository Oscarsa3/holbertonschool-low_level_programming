#include "hash_tables.h"
/**
  * hash_table_set - agrega un nuevo noda a un index
  * @ht: tabla
  * @key: llave
  * @value: valor
  * Return: 1
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t index;

	if (!ht | !key)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index]->value = strdup(value);
		ht->array[index]->key = (char *)key;
		ht->array[index]->next = NULL;
	}
	else
	{
		ht->array[index]->next = malloc(sizeof(hash_node_t));
		if (!ht->array[index]->next)
			return (0);
		ht->array[index]->next->value = strdup(value);
		if (!ht->array[index]->next->value)
			return (0);
		ht->array[index]->next->key = (char *)key;
		ht->array[index]->next->next = ht->array[index];
	}
	return (1);
}
