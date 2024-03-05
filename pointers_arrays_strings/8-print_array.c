#include <stdio.h>

/**
  *
  *
  *
  */

void print_array(int *a, int n)
{
	int i = 0;
	
	while (i < n)
	{
		i++;
		printf("%d", a[i - 1]);
		if (i < n)
			printf(", ");
		
	}
	printf("\n");
}
