#include <stdlib.h>

/**
 *int_index - Function that searches for an integer
 *@array: Array to search through
 *@size: Size of array
 *@cmp: Function pointer for comparising
 *
 *Return: Index of the first element int is found or -1 if no matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size;)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}

	return (-1);
}
