#include "main.h"

/**
 *print_sign - Function to print the sign of a number
 *@n: Integer to be evaluated
 *
 *Return: If positive 1.
 *If zero, it returns 0. Returns -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
