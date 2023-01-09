#include "main.h"

/**
 *_memcpy - Function that copies memory area
 *@dest: Destination for area to be copied to
 *@src: Memory area to be copied
 *@n: Number of bytes to be copied
 *
 *Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (temp);
}
