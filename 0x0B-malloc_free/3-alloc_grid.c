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
	int len = 0, r = width, c = height;
	int **grid, *ptr;

	len = sizeof(int *) * r + sizeof(int) * c * r;
	grid = (int **)malloc(len);

	ptr = (int *)(grid + r);
	for (i = 0; i < r ; i++)
		grid[i] = (ptr + c * i);

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
