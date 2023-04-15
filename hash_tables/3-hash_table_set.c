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

	if (!ht | !key)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (!ptr)
		ptr = new_nodo(NULL);
	if (ptr->key)
	{
		ht->array[index] = actualizar(ptr, key, valor);
		return (1);
	}
	ptr->key = strdup(key);
	ptr->value = valor;
	ptr->next = NULL;
	ht->array[index] = ptr;
	return (1);
}
hash_node_t *new_nodo(hash_node_t *nuevo)
{
	hash_node_t *nodo;

	nodo = malloc(sizeof(hash_node_t));
	if (!nodo)
		return (NULL);
	nodo->key = NULL;
	nodo->value = NULL;
	nodo->next = nuevo;
	return (nodo);
}
hash_node_t *actualizar(hash_node_t *nodo, const char *key, char *valor)
{
	hash_node_t *tmp = nodo;

	while (tmp)
	{
		if (!strcmp(key, tmp->key))
		{
			free(tmp->value);
			tmp->value = valor;
			return (nodo);
		}
		tmp = tmp->next;
	}
	tmp = nodo;
	nodo = new_nodo(nodo);
	if(!nodo)
	{
		nodo = tmp;
		return (nodo);
	}
	nodo->key = strdup(key);
	nodo->value = valor;
	return (nodo);
}
