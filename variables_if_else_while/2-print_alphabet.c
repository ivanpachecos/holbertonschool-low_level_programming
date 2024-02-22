#include <stdio.h>

/**
  * main - Alphabet reverse
  * Return: (value =0)
  */

int main(void)
{
	/* Declare two variables*/
	char start = 'a';
	char end = 'z';

	/*while LOOP*/
	while (end >= start)
	{
		putchar(end);
		end--;
	}
	putchar('\n');
	return (0);
}
