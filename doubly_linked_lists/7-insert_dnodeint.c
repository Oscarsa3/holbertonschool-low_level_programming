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
	dlistint_t *head = *h;
	dlistint_t *insert = head;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = head;
		if (head)
		{
			head->prev = new;
		}
		return (new);
	}
	while (insert != NULL && idx > i)
	{
		insert = insert->next;
		i++;
	}
	if (insert == NULL)
	{
		free(new);
		return (head);
	}
	new->prev = insert;
	new->next = insert->next;
	if (insert->next != NULL)
	{
		insert->next->prev = new;
	}
	insert->next = new;
	return (head);
}
