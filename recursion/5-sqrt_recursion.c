#include "main.h"


int sqrt_opration(int n, int i);

int _sqrt_recursion(int n)
{
	return (sqrt_opration(n, 1));
}

int sqrt_opration(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (sqrt_opration(n, i + 1));
}
