#include <stdio.h>
#include <stdlib.h>

/**
  *
  *
  *
  *
  */

int **alloc_grid(int width, int height)
{
	int **x;
	int i, j;

	if (width < 1)
		return NULL;
	if (height < 1)
		return NULL;
	
	x = (int **)malloc(height * sizeof(int *));

	if (x == NULL)
		return NULL;

	for (i = 0; i < height; i++)
	{
		x[i] = (int *)malloc(width * sizeof(int));
		if (x[i] == NULL)
			return NULL;
	}
	
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			x[i][j] = 0;
	}

	return (x);
}
