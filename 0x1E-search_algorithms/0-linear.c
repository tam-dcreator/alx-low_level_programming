#include "search_algos.h"

/**
*linear_search - Function that searches for a value in an array of integers
*using linear search
*
*@array: Pointer to the first element of the array to search in
*@size: Number of elements in the array
*@value: Value to search for
*
*Return: Integer index of search item or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (size == 0 || !array)
		return (-1);

	while (i < size)
	{
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
