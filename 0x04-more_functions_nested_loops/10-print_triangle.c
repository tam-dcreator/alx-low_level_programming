#include "main.h"

/**
 *print_triangle - Prints out a triangle
 *@size: Size of the triangle
 *
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, h;

		for (h = 1; h <= size; ++h)
		{
			for (b = 1; b <= size; ++b)
			{
				if ((h + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
