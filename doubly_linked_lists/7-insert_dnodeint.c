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
	unsigned int i = 0;
	dlistint_t *insert = *h;
	dlistint_t *u = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}
	if (idx == 0)
	{
		new->prev = new;
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (insert != NULL && i != idx)
	{
		insert = insert->next;
		i++;
	}
	if (insert == NULL)
	{
		while (u->next)
			u = u->next;
		u->next = new;
		new->prev = u;
		return (new);
	}
	new->next = insert;
	new->prev = insert->prev;
	insert->prev->next = new;
	insert->prev = new;
	return (new);
}
