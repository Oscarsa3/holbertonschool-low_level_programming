#include "lists.h"
/**
  * add_dnodeint - agrega al inicio
  * @head: nuevo head
  * @n: numero
  * Return: direccion
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *begin = malloc(sizeof(int));

	if (begin == NULL)
	{
		return (0);
	}
	begin->n = n;
	begin->next = *head;
	*head = begin;
	return (begin);


}
