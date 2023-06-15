#include "main.h"
/**
*array_range - Function that creats an array of integers
*@min: Minimum value
*@max: Maximum value
*
*Return: Pointer to newly formed array or NULL
*/
int *array_range(int min, int max)
{
	int i = 0, len;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
