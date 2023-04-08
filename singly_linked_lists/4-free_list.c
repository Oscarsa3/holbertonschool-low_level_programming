#include "lists.h"
/**
  * free_list - funciopn que limpia la memoria
  * @head: entrada
  * Return: nada
  */
void free_list(list_t *head)
{
	if (head->next)
	{
		free_list(head->next);
	}
	free(head);
}
