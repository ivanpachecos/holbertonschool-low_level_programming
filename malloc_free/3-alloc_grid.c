#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - allocates memory for a 2d array of integers
  *
  * @width: of the grid
  * @height: of the grid
  *
  * Return: pointer already allocateed or NULL
  */

int **alloc_grid(int width, int height)
{
	int **grid;
	int index;

	/*If width or height is 0 or negative, return NULL*/
	if (width < 1 || height < 1)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (index = 0; index < height; index++)
	{
		grid[index] = (int *)malloc(width * sizeof(int));
		if (grid[index] == NULL)
		{
			while (--index >= 0)
				free(grid[index]);
			free(grid);
			return (NULL);
		}

	}
	return (grid);
}
