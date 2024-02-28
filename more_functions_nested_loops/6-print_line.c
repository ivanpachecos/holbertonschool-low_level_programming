#include "main.h"

/**
 * print_line - draws a straight line.
 * @n: is value;
 * Return: nn.
 */
void print_line(int n)
{
	int start = 0;

	while (start < n)
	{
		_putchar('_');
		start++;
	}
	_putchar('\n');
}

