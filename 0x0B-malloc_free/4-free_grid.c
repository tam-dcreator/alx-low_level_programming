#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Frees the 2 dimensional grid previously created by alloc_grid
 *@grid: Memory allocation for grid
 *@height: Height of 2 D array
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
