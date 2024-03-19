#include "main.h"
#include <stdio.h>

/**
  * string_toupper - convert string to string toupper
  *
  * @str: string to convert
  *
  * Return: converted string
  */

char *string_toupper(char *str)
{
	char *ptr = str;
    
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr = *ptr - ('a' - 'A');
		ptr++;
	}
	return (str);
}
