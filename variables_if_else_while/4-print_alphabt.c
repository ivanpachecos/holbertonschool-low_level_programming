#include <stdio.h>

/**
  * main - Discaring two characteres
  * Return: (value = 0)
  */
int main(void)
{
	/*Start with a variable char*/
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
