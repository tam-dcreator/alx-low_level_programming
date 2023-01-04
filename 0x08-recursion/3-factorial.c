#include "main.h"

/**
 *factorial - Function that returns the factorial of a number
 *@n: Number whose factorial is returned
 *
 *Return: Integer Factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
