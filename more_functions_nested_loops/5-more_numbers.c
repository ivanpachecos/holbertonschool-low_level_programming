#include "main.h"

/**
 * more_numbers - prints numbers 10 times from 0 to 14
 *
 * Return: nn
 */
void more_numbers(void)
{
	int i, repeat;

	repeat = 0;
	while (repeat < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		_putchar('\n');
		repeat++;
	}
}
