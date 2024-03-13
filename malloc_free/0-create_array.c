#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars, and initializes
  * it with a specific char.
  *
  * @size: quantity
  * @c: value to transform
  *
  * Return: An array of chars
  */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
