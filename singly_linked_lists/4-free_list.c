#include "lists.h"
/**
  * free_list - funciopn que limpia la memoria
  * @head: entrada
  * Return: nada
  */
void free_list(list_t *head)
{
	list_t *de = head;
	list_t *next;

	while (de != NULL)
	{
		next = de->next;
		free(de);
		de = next;
	}
}
