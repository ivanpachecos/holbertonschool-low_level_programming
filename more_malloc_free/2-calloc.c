#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _calloc -  allocates memory for an array, using malloc.
  *
  * @nmemb: specifies the number of elements you wish to assign.
  * @size: size of each element in bytes
  *
  * Return: a pointer to the allocated memory.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	p = (char *)malloc(total_size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		p[i] = 0;

	return (p);
}
