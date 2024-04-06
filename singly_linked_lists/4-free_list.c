#include "lists.h"
#include <stdlib.h>

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
