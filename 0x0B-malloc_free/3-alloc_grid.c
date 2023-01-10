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
	int **grid = (int **)malloc(r * sizeof(int *));

	for (i = 0; i < r; i++)
		grid[i] = (int *)malloc(c * sizeof(int));
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
