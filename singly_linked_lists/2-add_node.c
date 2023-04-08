#include "lists.h"
/**
  * add_node - agrega un nuevo nodo al inicio
  * @head: head nuevo
  * @str: string nuevo
  * Return: La cantidad de elementos
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *begin = malloc(sizeof(list_t));

	if (begin == NULL)
	{
		return (0);
	}
	begin->str = strdup(str);
	begin->len = strlen(str);
	begin->next = *head;
	*head = begin;
	return (begin);
}
