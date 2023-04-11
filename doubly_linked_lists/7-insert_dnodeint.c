#include "lists.h"
/**
  * insert_dnodeint_at_index - agrega nodo en un sitio especifico
  * @h: direccion principal
  * @idx: posicion
  * @n: dato
  * Return: direccion o nulo
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *insert = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (*h);
	if (*h == NULL)
		return (*h);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
		{
			(*h)->prev = new;
		}
		return (new);
	}
	while (insert != NULL && i < idx)
	{
		insert = insert->next;
		i++;
	}
	if (insert == NULL)
	{
		free(new);
		return (*h);
	}
	new->prev = insert;
	new->next = insert->next;
	if (insert->next)
	{
		insert->next->prev = new;
	}
	insert->next = new;
	return (new);
}
