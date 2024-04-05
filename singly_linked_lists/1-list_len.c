#include "lists.h"

/**
  * list_len - lenght of a list
  * @h: elements of a list
  *
  * Return: return the number of my list
  */
size_t list_len(const list_t *h)
{
	size_t length;

	for (h = h, length = 0; h != NULL; h = h->next, length++)
		;

	return (length);
}
