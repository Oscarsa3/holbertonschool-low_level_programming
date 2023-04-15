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
	hash_node_t *ptr;
	int igual;

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
		igual = strcmp(ht->array[index]->value, valor);
		if (igual == 0)
			ht->array[index]->value = valor;
			ptr = malloc(sizeof(hash_node_t));
		if (!ptr)
			return (0);
		ptr->value = valor;
		if (!ptr->value)
			return (0);
		ptr->key = (char *)key;
		ptr->next = ht->array[index];
		ht->array[index]->next = NULL;
		ht->array[index] = ptr;
	}
	return (1);
}
