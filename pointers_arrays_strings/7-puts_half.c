#include "main.h"

/**
  *  - half string
  *
  * @str: string
  */
void puts_half(char *str)
{
	int long_str, half;

	long_str = 0;
	while (str[long_str] != '\0')
		long_str++;

	half = long_str / 2;

	while (half < long_str)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');

}
