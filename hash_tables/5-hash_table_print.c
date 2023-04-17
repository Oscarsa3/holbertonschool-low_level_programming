#include "hash_tables.h"
/**
  * hash_table_print - imprime el contenido de una tabla
  * @ht: tabla
  * Return: nada
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, i = 0;
	hash_node_t *p;

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		p = ht->array[index];
		while (p)
		{
			printf("\'%s\': \'%s\'", p->key, p->value);
			if (p->next)
				printf(", ");
			p = p->next;
		}
		while (!(ht->array[index + 1]))
			index++;
		if (i && index < ht->size)
			printf(", ");
		else
			i = 1;
		index++;
	}
	printf("}\n");
}
