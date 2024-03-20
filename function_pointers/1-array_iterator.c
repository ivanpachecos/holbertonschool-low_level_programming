#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - given as a parameter on each element of an array.
  *
  * @array: data of array.
  * @size: size of array.
  *
  * @action: pointer to the function.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
