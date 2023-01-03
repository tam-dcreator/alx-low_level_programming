#include "main.h"

/**
 *_memset - Function that fills memory with a constant byte
 *@s: Memory to be filled
 *@b: Constant byte that fills up memory
 *@n: The number of bytes to be filled
 *
 *Return: A pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (temp);
}
