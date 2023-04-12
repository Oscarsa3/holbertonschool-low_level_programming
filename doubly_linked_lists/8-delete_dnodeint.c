#include "lists.h"
/**
  * delete_dnodeint_at_index - elimina segun la posicion
  * @head: cabecera actual
  * @index: posicion
  * Return: 1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *find = *head;
	dlistint_t *new = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(new);
		return (1);
	}
	while (find != NULL && i != index)
	{
		find = find->next;
		i++;
	}
	if (find == NULL)
		return (-1);
	find->prev->next = find->next;
	if (find->next)
		find->next->prev = find->prev;
	free(find);
	return (1);
}
