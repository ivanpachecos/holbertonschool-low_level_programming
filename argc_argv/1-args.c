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
	
	int count = 0;
	count += argc -1;
	printf("%d\n", count);

	return (0);	
}
