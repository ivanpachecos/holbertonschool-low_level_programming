#include "main.h"
#include <stdlib.h>

/**
  *
  *
  *
  *
  */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * (size + 1));
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[size] = '\0';

	return (str);
}
