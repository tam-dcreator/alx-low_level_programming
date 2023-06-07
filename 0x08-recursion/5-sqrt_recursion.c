#include "main.h"

/**
 *find_sqrt - Function that finds square root
 *@num: Number to find the square root
 *@n: 1
 *
 *Return: Square root of n for n with natural squares and -1 if not
 */
int find_sqrt(int n, int num)
{
        if (n * n == num)
                return (n);
        if (n * n > num)
                return (-1);
        return (find_sqrt(n + 1, num));
}

/**
 *_sqrt_recursion - Calls find sqrt on a number
 *@n: Integer
 *
 *Return: Output from find_sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_sqrt(1, n));
}
