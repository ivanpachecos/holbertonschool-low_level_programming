#include "main.h"

/**
* flip_bits - returns the number of bits you would need to
* flip to get from one number to another.
* @n: integer n
* @m: number
*
* Return: number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value, i = 0;

	value = n ^ m;

	while (value > 0)
	{
		i = i + (value & 1);
		value = value >> 1;
	}

	return (i);
}
