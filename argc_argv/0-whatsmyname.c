#include <stdio.h>

/**
  * main - print its name, followed by a new line.
  *
  * @argc: is greater than zero.
  * @argv: will be string containing the program's name.
  *
  * Return: always zero.
  */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
