#include "main.h"
/**
*free_grid - Functions that frees a 2 dimensional grid
*@grid: 2 dimensional Grid
*@height: Grid Rows
*
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
