#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - searches a string for any of a set of bytes.
  *
  * @s: locates the first occurrence in the string.
  * @accept: compare bytes
  *
  * Return: a pointer to the byte and NULL if no such byte is found.
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			/*Return the postion of the match in s*/
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
