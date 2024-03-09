#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 *
 * @a: pointer to the first row of the matrix
 * @size: access main elements
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int count_main = 0;
	int count_secondary = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		count_main += *(a + i * size + i);
		count_secondary += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d", count_main, count_secondary);
	putchar('\n');
}
