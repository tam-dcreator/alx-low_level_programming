#include "main.h"
#include <stdlib.h>

/**
 *array_range - Function that creates an array of integers
 *@min: Minimum integer
 *@max: Maximun integer
 *
 *Return: Pointer to array or null
 */
int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(*s) * (max - min) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < max + 1; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
