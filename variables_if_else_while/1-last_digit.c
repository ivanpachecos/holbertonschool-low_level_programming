#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - prints a condition of two numbers being compared
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n, last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	/*last digit*/
	last_n = n % 10;

	/*check with conditions*/
	if (last_n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_n);
	}
	else if (last_n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_n);
	}
	else if (last_n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_n);
	}
	return (0);
}
