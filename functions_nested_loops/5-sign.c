#include <stdio.h>
#include "main.h"

/**
  * print_sign - return characters due to their conditions
  * @n: reseive the characters for verification
  * Return: ( 0 and 1)
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + 0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
