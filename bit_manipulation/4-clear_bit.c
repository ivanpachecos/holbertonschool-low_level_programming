#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to decimal number
 * @index: index position starting from 0 of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > sizeof(n) * 8)
		return (-1);

	value = 1 << index;

	*n = ~(~*n | value);

	return (1);
}
