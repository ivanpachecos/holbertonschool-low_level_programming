#include "main.h"

/**
* prbinary - prints binary
* @n: the number to print
**/
void prbinary(unsigned long int n)
{
	if (n == 0)
		return;

	prbinary(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');
	else
		_putchar('0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		prbinary(n);
}
