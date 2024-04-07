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
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (*head);
}
