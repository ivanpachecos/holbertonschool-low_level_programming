#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers.
  *
  * @argc: quantity
  * @argv: characters received
  *
  * Return: number if it is error and always zero.
  */

int main(int argc, char *argv[])
{
	int mult;

	if (argc > 2 && argc < 4)
		mult = atoi(argv[1]) * atoi(argv[2]);
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", mult);

	return (0);
}
