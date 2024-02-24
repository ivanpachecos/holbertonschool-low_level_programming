#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - check the code.
 * @c: different characters for checks
 * Return: 1 if is true || 0 if is false.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
