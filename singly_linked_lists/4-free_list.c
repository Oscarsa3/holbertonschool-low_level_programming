#include "lists.h"
/**
  * free_list - funciopn que limpia la memoria
  * @head: entrada
  * Return: nada
  */
void free_list(list_t *head)
{
	list_t *delete;

	while (head)
	{
		delete = head;
		free(head->str);
		head = head->next;
		free(delete);
	}
}
