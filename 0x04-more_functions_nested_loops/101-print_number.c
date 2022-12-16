#include "main.h"

/**
 *print_number - Function to print out number
 *@n: Number to be printed out
 *
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}

	if (i / 10)
		print_number(i / 10);
	_putchar(i % 10 + 48);
}
