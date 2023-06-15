#include "main.h"
/**
*alloc_grid- Function that returns a pointer to a 2 dimensional array of
*integers
*@width: Width of the 2-D array
*@height: Height of the 2-D array
*
*Return: A pointer to the array or NULL
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	/*Allocate memory to the rows*/
	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);
	/*Allocate memory to each colomn on every row */
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
