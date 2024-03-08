#include "main.h"

/**
  * _strspn - gets the length of a prefix substring.
  *
  * @s: nitial segment
  * @accept: only of bytes from accept
  *
  * Return: numbers of bytes
  */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}

		}
		if (accept[j] == '\0')
			break;
	}
	return (count);
}
