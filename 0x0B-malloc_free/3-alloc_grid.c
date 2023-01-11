#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - Function that returns a pointer to a 2 dimensional array of ints
 *@width: Width of the array
 *@height: Height of the array
 *
 *Return: Pointer to a 2 D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int c = width, r = height;
	int **grid;

	if (c <= 0 || r <= 0)
		return (NULL);

	/*Reserve memory allocations for all rows*/
	grid = malloc(r * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	/*For every row created, reserve memory allocations for*/
	/*corresponding colomn*/
	for (i = 0; i < r; i++)
	{
		grid[i] = (int *)malloc(c * sizeof(int));
		/*If any of the memory allocation fails, remove all*/
		if (grid[i] == NULL)
		{
			for (i = 0; i < r; i++)
				free(grid[i]);
			free(grid);

			return (NULL);
		}
	}

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
