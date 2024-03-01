#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - Fizz-Buzz test
 * @start: number
 * @end: number
 * Return: Always 0.
 */

void fizz_buzz(int start, int end)
{
	for (; start <= end; start++)
	{
		if (start % 15 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else if (start % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		else if (start % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else
		{
			if (start > 9)
				putchar('0' + start / 10);
			putchar('0' + start % 10);
		}
		putchar(' ');
	}
	putchar('\n');
}

/**
  * main - set data
  * Return: always 0
  */

int main(void)
{
	int start = 1;
	int end = 100;

	fizz_buzz(start, end);
	return (0);
}
