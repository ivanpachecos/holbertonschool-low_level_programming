#include "lists.h"

/**
  *
  *
  *
  *
  *
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new_node = NULL;
	unsigned int i = 0;
	
	new_node = head;
	while (head == NULL)
		return (NULL);

	while (new_node != NULL && i < index)
	{
		new_node = new_node->next;
		i++;
	}
	if (new_node == NULL)
		return (NULL);
	return (new_node);
}
