#include "main.h"

/**
 *print_square - Function to print squares
 *@size: The size of the square
 *
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i++ < size)
		{
			int j = 0;

			while (j++ < size)
				_putchar('#');
			_putchar('\n');
		}
	}
}
