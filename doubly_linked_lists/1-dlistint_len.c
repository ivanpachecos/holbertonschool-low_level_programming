#include "lists.h"

/**
  *
  *
  *
  *
  *
  *
  *
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	for (h = h, len = 0; h != NULL; h = h->next, len++)
		;
	return (len);
}
