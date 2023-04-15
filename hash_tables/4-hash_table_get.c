#include "hash_tables.h"
/**
  * hash_table_get - muestra el valor asignado a dicha clave
  * @ht: tabla
  * @key: clave
  * Return: value
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	size_t index;

	if (!ht | !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(key, tmp->key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
