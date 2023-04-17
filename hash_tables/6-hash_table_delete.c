#include "hash_tables.h"
/**
  * hash_table_delete - elemina una tabla hash
  * @ht: tabla
  * Return: nada
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *nodo;
	size_t index = 0;

	if (!ht)
		return;
	while (index < ht->size)
	{
		if (ht->array[index])
		{
			nodo = ht->array[index];
			while (nodo)
			{
				tmp = nodo->next;
				free(nodo->key);
				free(nodo->value);
				free(nodo);
				nodo = tmp;
			}
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
