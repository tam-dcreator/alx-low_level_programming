#include "main.h"
/**
*_calloc - Function that allocates memory for an array using malloc
*@nmemb: Number of element of the array
*@size: size of the memory needed for allocation
*
*Return: void pointer to the allocated memory or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
