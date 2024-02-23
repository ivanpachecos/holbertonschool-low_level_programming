#include <stdio.h>

/**
  * main - prints all numbers of base 16 in lowecase
  * Return: (value = 0)
  */
int main(void)
{
	/*number and character variables*/
	int i;
	char c = 'a';

	/*loop for all numbers*/
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	/*loop for letters*/
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	/*new line*/
	putchar('\n');
	return (0);
}
