#include "lists.h"
/**
  * print_list - imprime listas anidadas
  * @h: head que se envia
  * Return: la cantidad de impresiones
  */
size_t print_list(const list_t *h)
{
	int i = 0;
	
	while (h)
	{
		if (h->str == NULL)
		{
			printf ("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
