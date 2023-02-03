#include "main.h"

/**
 *print_binary - Function that prints binary representation of a number.
 *@n: number.
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}
