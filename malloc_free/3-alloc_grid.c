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
	int **grid;
	int i, j;

	/*if width or height is 0 or negative, return NULL*/
	if (width < 1 || height < 1)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return NULL;

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[i]);
			free(grid);
			return NULL;
		}
	}

	return (grid);
}
