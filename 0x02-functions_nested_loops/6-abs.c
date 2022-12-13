#include "main.h"

/**
 *_abs - Function to print the absolute value a number
 *@n: Integer to be evaluated
 *
 *Return: 0 On success.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n *= -1);
}
