#include "main.h"

/**
 *get_bit - Function that returns the value of a bit at a given index.
 *@n: number.
 *@index: position.
 *
 *Return: value of the bit index or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*check if index is greater than length of unsigned long int (64)*/
	if (index > 64)
		return (-1);
	if (n == 0)
		return (0);
	n = n >> index;

	return (n & 1);
}
