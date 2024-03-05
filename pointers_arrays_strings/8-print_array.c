#include <stdio.h>

/**
  * print_array - print number with coma
  * @n: arr
  * @a: arr[n]
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
