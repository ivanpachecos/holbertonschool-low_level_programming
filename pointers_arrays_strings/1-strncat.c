#include "main.h"

/**
  * _strncat - Write a function that concatenates two strings.
  *
  * @dest: string 1
  * @src: string 2
  * @n: max number
  *
  * Return: string concatenated
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
