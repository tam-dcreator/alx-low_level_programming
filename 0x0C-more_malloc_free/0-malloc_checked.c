#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Function that allocates memory using malloc
 *@b: Unsigned int for size of malloc
 *
 *Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *alloc = malloc(b);

	if (alloc == NULL)
		exit(98);

	return (alloc);
}
