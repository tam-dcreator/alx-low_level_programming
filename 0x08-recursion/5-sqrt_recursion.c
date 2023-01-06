#include "main.h"

/**
 *find_sqrt - Function that finds square root using subtraction method
 *@n: Number to find the square root
 *@num: 1
 *
 */
void find_sqrt(int n, int num)
{
	if (n == 0)
		return ((num - 1) / 2);
	if (n < 0)
		return (-1);
	find_sqrt(n - num, num + 2);
}

/**
 *_sqrt_recursion - Calls find sqrt on a number
 *@n: Integer
 *
 *Return: Square root of n for perfect squares and -1 if not
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}
