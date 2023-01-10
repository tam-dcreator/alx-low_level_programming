#include "main.h"
#include <stdlib.h>

/**
 *create_array - Function that creates an array of chars and initializes with a
 *specific char
 *@size: Size of the malloc to create
 *@c: Specific char to initialize the array
 *
 *Return: Pointer to array if successful or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return ('\0');

	s = malloc(sizeof(char) * size);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
