#include "lists.h"
/**
  * print_dlistint - imprime las listas
  * @h: head
  * Return: cantidad de elementos
  */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
