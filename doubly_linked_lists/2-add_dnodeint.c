#include "lists.h"
#include <stdlib.h>

/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
  *
  * @head: double pointer
  * @n: numbers
  *
  * Return: return numbers.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (tmp == NULL)
		new->next = NULL;
	else
	{
		while (tmp->prev)
			tmp = tmp->prev;

		tmp->prev = new;
		new->next = tmp;
	}
	*head = new;

	return (*head);
}
