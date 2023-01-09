#include "main.h"

/**
 *_strncpy - Function that copies a string
 * @src: The source of the string
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: Pointer to the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
		*(dest + i) = *(src + i);

	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
