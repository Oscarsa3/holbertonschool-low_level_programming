#include "lists.h"
/**
  * list_len - cuenta los elementos hay en una linked list
  * @h: head
  * Return: longitud
  */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
