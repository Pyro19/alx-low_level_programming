#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free of 2 dimensional grid
 * @grid: 2 dimensional array to free
 * @height: input size
 *
 * return: free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
