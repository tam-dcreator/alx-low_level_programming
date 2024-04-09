#include "search_algos.h"

/**
*binary_search - Function that searches for a value in an array of integers
*using binary search algorithm
*
*@array: Pointer to the first element of the array to search in
*@size: Number of elements in the array
*@value: Value to search for
*
*Return: Integer index of search item or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, mid;

	if (size <= 0 || !array)
		return (-1);

	while (i <= j)
	{
		mid = (i + j) / 2;
		print_array(array, i, j);

		if (array[i] == value)
		{
			return (mid);
		}
		else
		{
			if (array[mid] > value)
				j = mid - 1;
			else
				i = mid + 1;
		}
	}
	return (-1);
}

/**
*print_array - Function that prints array per iteration
*
*@array: Pointer to the first element of the array to search in
*@start_index: Starting index
*@j: Final index
*
*/
void print_array(int *array, int start_index, int j)
{
	int i;

	printf("Searching in array:");
	for (i = start_index; i < j; i++)
		printf(" %d,", array[i]);

	printf(" %d\n", array[j]);
}
