#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *
  *
  *
  *
  *
  */

int main(int argc, char *argv[])
{
	int sum, i, j, noNumber = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				j = atoi(argv[i]);
				sum += j;
			}
			else
			{ 
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", noNumber);

	return (0);
}
