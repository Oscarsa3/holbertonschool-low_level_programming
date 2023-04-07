#include "lists.h"
/**
  * dlistint_len - cuenta el numero de elementos
  * @h: head
  * Return: cantidad de elementos
  */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);

}
