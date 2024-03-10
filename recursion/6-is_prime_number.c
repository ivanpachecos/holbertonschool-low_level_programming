#include "main.h"

/**
  * is_prime_ - auxiliary function
  * @n: number
  * @divisor: division start
  * Return: result of the operation
  */

int is_prime_(int n, int divisor)
{
	if (n < 2)
		return (0);

	if (divisor == n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_(n, divisor + 1));
}

/**
  * is_prime_number - return  integer is a prime number
  *
  * @n: number
  * Return: 1 if the imput is a prime number or otherwise 0
  */

int is_prime_number(int n)
{
	return (is_prime_(n, 2));
}
