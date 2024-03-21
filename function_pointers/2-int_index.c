#include "function_pointers.h"
#include <stddef.h>

/**
  * int_index - position of an number compared.
  *
  * @array: array of the elements.
  * @size: of an array.
  * @cmp: pointer function to compare
  *
  * Return: position of value.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
