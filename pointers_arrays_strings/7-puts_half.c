#include "main.h"
#include <string.h>

/**
  * puts_half - half string
  *
  * @str: string
  */


void puts_half(char *str)
{
	int n;
	/*get long of string*/
	int length = strlen(str);

	for (n = length / 2; n < length; n++)
		_putchar(str[n]);

	_putchar('\n');
}
