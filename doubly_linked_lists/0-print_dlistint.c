#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all elemets of a list.
 *
 * @h: access to data.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
