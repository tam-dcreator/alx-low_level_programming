#include "search_algos.h"

/**
*interpolation_search - Function that searches for a value in an array of
*integers using interpolation search algorithm
*
*@array: Pointer to the first element of the array to search in
*@size: Number of elements in the array
*@value: Value to search for
*
*Return: Integer index of search item or -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	/*Check if array is empty or null*/
	if (size == 0 || !array)
		return (-1);

	/*Determine probe position*/
	pos = low + (((double)(high - low) /
		      (array[high] - array[low])) * (value - array[low]));

	while (low < size)
	{
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n"
			       , pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos;
		pos = low + (((double)(high - low) /
		      (array[high] - array[low])) * (value - array[low]));
	}
	return (-1);
}
