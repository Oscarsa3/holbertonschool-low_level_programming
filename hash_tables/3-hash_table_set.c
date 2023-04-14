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
	char *valor = strdup(value);

	if (!ht | !key)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		ht->array[index]->value = valor;
		ht->array[index]->key = strdup(key);
		ht->array[index]->next = NULL;
	}
	else
	{

		ht->array[index]->next = malloc(sizeof(hash_node_t));
		if (!ht->array[index]->next)
			return (0);
		ht->array[index]->next->value = valor;
		if (!ht->array[index]->next->value)
			return (0);
		ht->array[index]->next->key = (char *)key;
		ht->array[index]->next->next = ht->array[index]->next;
		ht->array[index] = ht->array[index]->next;
	}
	return (1);
}
