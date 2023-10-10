#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2D grid of integers
 * @width: number of cols
 * @height: number of rows
 * Return: NULL or grid (successful)
**/

int **alloc_grid(int width, int height)
{
	int **grid = (int **)malloc(height * sizeof(int *));
	int i, j;

	if (grid == NULL)
	{
		return (NULL);
	}

	if (height == 0 || width == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);

}
