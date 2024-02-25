#include "main.h"

/**
 * print_last_digit - get the last digit of a number
 * @n: revise value of other function
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	/*value is less that 0, then multiply to obtain positive number*/
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

