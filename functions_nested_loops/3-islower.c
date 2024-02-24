#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _islower - check whether or not it is in compiance with the code.
 * @c: value of the function main
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
