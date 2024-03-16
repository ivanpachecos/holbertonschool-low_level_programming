#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * string_nconcat - concatenate two string
  *
  * @s1: string one.
  * @s2: string two.
  * @n: specifies how many bytes of string s2
  *     should be concatenated with string s1.
  *
  * Return: strings concatenated.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*len of two caracter*/
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(len1 + n + 1);
	if (concat == NULL)
		return (NULL);
	for (index = 0; index < len1; index++)
		concat[index] = s1[index];
	for (index = 0; index < n; index++)
		concat[len1 + index] = s2[index];
	concat[len1 + n] = '\0';

	return (concat);
}
