#include "lists.h"
/**
  * add_node_end - agrega nodo al final
  * @head: agrega
  * @str: nuevo string
  * Return: direccion del nuevo
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *end = malloc(sizeof(list_t));

	if (end == NULL)
	{
		return (NULL);
	}

	end->str = strdup(str);
	end->len = strlen(str);
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = end;
	}
	return (end);
}
