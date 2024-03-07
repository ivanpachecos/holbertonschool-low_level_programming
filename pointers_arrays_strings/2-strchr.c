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
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
