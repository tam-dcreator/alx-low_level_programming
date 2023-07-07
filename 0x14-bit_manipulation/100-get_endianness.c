#include "main.h"

/**
 *get_endianness - Function that checks endianness
 *
 *Return: 0 if big endian and 1 if little endian
 *
 */
int get_endianness(void)
{
	int i = 1;
	char *c;

	c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
