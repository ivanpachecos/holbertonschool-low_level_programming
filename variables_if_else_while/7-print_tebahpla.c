#include <stdio.h>

/**
  * main - Reverse ALphabet
  * Return: (value = 0)
  */
int main(void)
{
	/*char with name variables*/
	char start = 'z';
	char end = 'a';
	/*loop for reverse alphabet*/
	while (start >= end)
	{
		putchar(start);
		start--;
	}

	/*new line*/
	putchar('\n');
	return (0);
}
