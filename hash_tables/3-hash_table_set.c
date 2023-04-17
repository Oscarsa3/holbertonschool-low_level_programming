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
	hash_node_t *ptr, *tmp;

	if (!ht | !key | (strcmp(key, "") == 0))
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (ptr && strcmp(key, ptr->key) == 0)
	{
		free(ptr->value);
		ptr->value = strdup(value);
		return (1);
	}
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (0);
	tmp->value = strdup(value);
	tmp->key = strdup(key);
	tmp->next = ht->array[index];
	ht->array[index] = tmp;
	return (1);
}
