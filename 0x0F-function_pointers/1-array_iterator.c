#include <stdlib.h>

/**
 *array_iterator - Function that executes a function on elements of an array
 *@array: Array
 *@size: Size of the array
 *@action: Function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (action != NULL && array != NULL)
			action(array[i]);
	}
}
