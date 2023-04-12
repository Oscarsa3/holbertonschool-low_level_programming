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
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (insert != NULL && i != (idx - 1))
	{
		insert = insert->next;
		i++;
	}
	if (insert == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = insert->next;
	new->prev = insert;
	if (insert->next)
		insert->next->prev = new;
	insert->next = new;
	return (new);
}
