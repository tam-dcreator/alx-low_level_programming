#include "main.h"

/**
 *print_line - Function to display n number of lines
 *@n: Number of lines to be displayed
 *
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i++ < n)
			_putchar('_');
		_putchar('\n');
	}
}
