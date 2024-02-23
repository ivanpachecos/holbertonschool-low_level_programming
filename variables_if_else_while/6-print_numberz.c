#include <stdio.h>

/**
  * main - prints the using the putchar function with numbers
  * Return: (value = 0)
  */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}

	putchar('\n');
	return (0);
}
