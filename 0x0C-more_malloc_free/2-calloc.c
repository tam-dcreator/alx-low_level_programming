#include "main.h"
#include <stdlib.h>

/**
 *_calloc - Function that allocates memory for an array
 *@nmemb:Array size
 *@size: Byte size of nmemb
 *
 *Return: Pointer to allocated memory or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		s[i] = 0;
	return (s);
}
