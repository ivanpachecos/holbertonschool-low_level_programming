#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
		}
		_putchar('\n');
		repeat++;
	}
}
