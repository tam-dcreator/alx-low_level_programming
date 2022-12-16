#include "main.h"

/**
 *print_diagonal - Function to display slashes n times
 *@n: Number of times diagonal is displayed
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			int j = 2;

			while (j++ <= i)
				_putchar(' ');
			_putchar('\\');
			if (i < n)
				_putchar('\n');
		}
		_putchar('\n');
	}
}
