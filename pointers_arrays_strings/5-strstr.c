#include <stdio.h>

/**
  * _strstr - locates a substring
  *
  * @haystack: finds in the string
  * @needle: find word
  *
  * Return: Returns the position of the substring in haystack and Null if
  * the substring is not found.
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j, match;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		match = 1;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				match = 0;
				break;
			}
		}
		if (match)
			return (&haystack[i]);
	}
	return (NULL);
}
