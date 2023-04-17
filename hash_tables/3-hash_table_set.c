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

	if (!ht | !key)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		ht->array[index]->value = strdup(value);
		ht->array[index]->key = strdup(key);
		ht->array[index]->next = NULL;
	}
	else
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		ptr = malloc(sizeof(hash_node_t));
		ptr->value = strdup(value);
		ptr->key = strdup(key);
		ptr->next = ht->array[index];
		ht->array[index]->next = NULL;
		ht->array[index] = ptr;
	}
	return (1);
}
