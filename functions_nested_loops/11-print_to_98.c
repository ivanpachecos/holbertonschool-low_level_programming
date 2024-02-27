#include "main.h"

/**
 * print_number - import numeber
 * @n: printNUmber
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if
		(n < 100) {
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
	else if (n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}

/**
 * print_to_98 - Imprime una secuencia de números hasta 98
 * @n: Número inicial de la secuencia
 */
void print_to_98(int n)
{
	int value = 98;

	if (n <= value)
	{
		for (; n <= value; n++)
		{
			print_number(n);
			if (n != value)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= value; n--)
		{
			print_number(n);
			if (n != value)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

