#include "lists.h"
/**
  * add_dnodeint - agrega al inicio
  * @head: nuevo head
  * @n: numero
  * Return: direccion
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *begin = malloc(sizeof(dlistint_t));

	if (begin == NULL)
	{
		return (NULL);
	}
	begin->n = n;
	begin->next = *head;
	begin->prev = NULL;

	if (*head)
	{
		(*head)->prev = begin;
	}
	*head = begin;
	return (begin);


}
