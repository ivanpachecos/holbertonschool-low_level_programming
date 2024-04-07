#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - sum all elements
 *
 * @head: data
 *
 * Return: sum of all the elements
*/
int sum_dlistint(dlistint_t *head)
{
	int sum_total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum_total += head->n;
		head = head->next;
	}
	return (sum_total);
}
