#include "main.h"
/**
*malloc_checked- Function that allocates memory using malloc
*@b: Size of malloc
*
*Return: A void pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
