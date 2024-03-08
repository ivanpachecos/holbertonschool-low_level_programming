#include <stdio.h>
#include <string.h>
/**
  * _strchr - locates a character in a string.
  * @s: string to condition
  * @c: string to condition
  *
  * Return: string
  */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
