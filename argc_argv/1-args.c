#include <stdio.h>

/**
  * main - prints the number of arguments passed into it
  *
  * @argc: number of words
  * @argv: unused
  *
  * Return: always zero.
  */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		/**	printf("%d\n", count);**/
			;
		printf("%d\n", count);
	}
	else {
		count = 0;
		printf("%d\n", count);
	}
	return (0);
}
