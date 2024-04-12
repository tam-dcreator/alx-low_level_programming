#include "search_algos.h"

/**
*jump_search - Function that searches for a value in an array of integers
*using jump search algorithm
*
*@array: Pointer to the first element of the array to search in
*@size: Number of elements in the array
*@value: Value to search for
*
*Return: Integer index of search item or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jmp_size = sqrt(size), low;

	if (size == 0 || !array)
		return (-1);

	while (array[i] < value && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jmp_size;
	}

	low = i - jmp_size;
	printf("Value found between indexes [%lu] and [%lu]\n", low, i);

	while (low < i && low < size)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
		low++;
	}

	return (-1);
}
