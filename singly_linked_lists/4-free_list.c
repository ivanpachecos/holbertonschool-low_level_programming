#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free memory
 *
 * @head: data of the elemets
 *
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *freed;

	freed = head;

	while (freed != NULL)
	{
		free(freed->str);
		free(freed);
		freed = freed->next;
	}
}
