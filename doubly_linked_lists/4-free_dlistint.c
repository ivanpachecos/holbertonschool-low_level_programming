#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a `dlistint_t` doubly linked list
 * @head: head of LL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new = NULL;
	dlistint_t *nexxt;

	new = head;
	while (new != NULL)
	{
		nexxt = new->next;
		free(new);
		new = nexxt;
	}
}
