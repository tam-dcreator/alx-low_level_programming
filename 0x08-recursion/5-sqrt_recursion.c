#include "main.h"

/**
 *find_sqrt - Function that finds square root using subtraction method
 *@n: Number to find the square root
 *@num: 1
 *
 *Return: Square root of n for n with natural squares and -1 if not
 */
int find_sqrt(int n, int num)
{
	if (n == 0)
		return ((num - 1) / 2);
	if (n < 0)
		return (-1);
	return (find_sqrt(n - num, num + 2));
}

/**
 *_sqrt_recursion - Calls find sqrt on a number
 *@n: Integer
 *
 *Return: Output from find_sqrt
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}
