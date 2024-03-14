#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - contains a copy of the string given as a parameter.
  *
  * @str: string to be copied
  * Return: string copied
  */

char *_strdup(char *str)
{
	char *saveChar;
	int i;
	int size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	saveChar = malloc(sizeof(char) * (size + 1));

	if (saveChar == NULL)
		return (NULL);

	/*Copy every character*/
	for (i = 0; i < size; i++)
		saveChar[i] = str[i];
	/*add null value*/
	saveChar[i] = '\0';

	return (saveChar);
}
