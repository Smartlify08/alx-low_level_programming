#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	int **grid = (int **)malloc(height * sizeof(int *));
	int i, j;

	if (grid == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
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
