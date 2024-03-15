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
    int h;

    if (width <= 0 || height <= 0)
        return NULL;

    grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL)
        return NULL;

    for (h = 0; h < height; h++)
    {
        grid[h] = (int *)malloc(width * sizeof(int));
        if (grid[h] == NULL)
        {
            while (--h >= 0)
                free(grid[h]);
            free(grid);
            return NULL;
        }
    }

    return grid;
}
