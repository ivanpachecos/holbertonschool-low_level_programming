#include "main.h"

int sqrt_opration(int n, int i);

/**
  * _sqrt_recursion - the natural square root of a number.
  * @n: value
  * Return: square root a number
  */

int _sqrt_recursion(int n)
{
	return (sqrt_opration(n, 1));
}

/**
  * sqrt_opration - find the square root of n
  * @n: value
  * @i: index
  * Return: condition and result of square roof of n
  */

int sqrt_opration(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (sqrt_opration(n, i + 1));
}
