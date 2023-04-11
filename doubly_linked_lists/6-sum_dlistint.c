#include "lists.h"
/**
  * sum_dlistint - suma el valor de nodos
  * @head: direccion al primer nodo
  * Return: suma
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sumar = head;
	int suma = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (sumar != NULL)
	{
		suma += sumar->n;
		sumar = sumar->next;
	}
	return (suma);
}
