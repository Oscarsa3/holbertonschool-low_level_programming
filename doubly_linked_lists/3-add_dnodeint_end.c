#include "lists.h"
/**
  * add_dnodeint_end - agrega nodo al final
  * @head: nuevo agregado
  * @n: nuevo contenido del nodo
  * Return: direccion del puntero
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new;
	new->prev = end;
	return (end);
}
