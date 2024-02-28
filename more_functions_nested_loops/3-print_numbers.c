#include <stdio.h>

/**
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
}
