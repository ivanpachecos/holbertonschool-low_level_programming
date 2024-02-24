#include <stdio.h>

/**
  * main - Print only use putchar fuction and combinations
  * Return: (value = 0)
  */
int main(void)
{
	int i;
	/*loop for gives combinations of numbers and characteres*/
	for (i = 0; i < 10; i++)
	{
		if (i > 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i + '0');
	}
	/*new line*/
	putchar('\n');
	return (0);
}
