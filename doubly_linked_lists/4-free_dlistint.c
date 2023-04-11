#include "lists.h"
/**
  * free_dlistint - libera espacios en memoria
  * @head: nodo principal
  * Return: nada
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *delete = head;
	dlistint_t *end = NULL;

	while (delete)
	{
		end = delete->next;
		free(delete);
		delete = end;
	}
}
