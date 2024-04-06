#include "lists.h"
#include <stdlib.h>

void free_list(list_t *head)
{
	list_t *frees;
	while (head != NULL)
	{
		frees = head;
		head = head->next;
		free(frees);
	}
}
