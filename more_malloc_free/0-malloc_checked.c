#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - function that allocates memory using malloc.
  *
  * @b: number
  *
  * Return: pointer that allocates memory;
  */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
