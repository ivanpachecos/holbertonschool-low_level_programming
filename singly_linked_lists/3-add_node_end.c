#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 *
 * @head: head of a list, double pointer.
 * @str: str needs to be duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *i = NULL;
   
	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

  
	if (*head == NULL)
		*head = new_node;
	else
	{
		for (i = *head; i->next != NULL; i = i->next)
			;
    
		i->next = new_node;
	}
	return ((list_t *)new_node);
}
