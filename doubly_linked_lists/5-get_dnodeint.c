#include "lists.h"
/**
  * get_dnodeint_at_index - muestra nodos seleccionados
  * @head: direccion al nodo
  * @index: nodo a seleccionar
  * Return: Direccion o nulo
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *add = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (add != NULL && index > 0)
	{
		add = add->next;
		index--;
	}
	if (add == NULL)
	{
		return (NULL);
	}
	return (add);
}
