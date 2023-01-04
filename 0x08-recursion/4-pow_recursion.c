#include "main.h"

/**
 *_pow_recursion - Function that returns x raised to y
 *@x: Integer to raise
 *@y: Power
 *
 *Return: Integer of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
