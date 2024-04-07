#include "lists.h"
#include <stdio.h>

/**
 * 
 * 
 * 
 * 
 * 
 * 
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