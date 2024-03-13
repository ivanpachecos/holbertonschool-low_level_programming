#include <stdio.h>
#include <stdlib.h>
/**
  *
  *
  *
  *
  *
  *
  */

int main(int argc, char *argv[])
{
	int mult;
	if (argc > 2)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", mult);
	return (0);
}
