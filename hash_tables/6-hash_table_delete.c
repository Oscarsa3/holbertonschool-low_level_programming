#include "hash_tables.h"
/**
  *
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	size_t index = 0;

	while (index < ht->size)
	{
		while (ht->array[index])
		{
			tmp = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = tmp;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
