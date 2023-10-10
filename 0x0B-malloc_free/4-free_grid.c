#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory of already allocated grid
 * @grid: allocated 2-Dimensional grid 
 * @height: height of grid(rows)
**/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
