#include <stdio.h>

/**
  * _strstr - locates a substring
  * 
  * @haystack:
  * @needle: 
  *
  * 
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		int match = 1;
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
