#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * array_range - creates an array of integers.
  *
  * @min: number
  * @max: number
  *
  * Return: number from lowest to highest.
  */

int *array_range(int min, int max)
{
	int *ptr_min_max, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr_min_max = (int *)malloc(size * sizeof(int));
	if (ptr_min_max == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr_min_max[i] = min + i;

	return (ptr_min_max);
}
