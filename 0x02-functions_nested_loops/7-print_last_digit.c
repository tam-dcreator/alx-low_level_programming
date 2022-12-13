#include "main.h"

/**
 *print_last_digit - Function to print last digit of a number
 *@n: Integer to be evaluated
 *
 *Return: The last digit is returned
 */
int print_last_digit(int n)
{
	int last;
	
	last = n % 10;
	if (last < 0)
		last *= -1;
	_putchar('0' + last);
	return (last);
}
