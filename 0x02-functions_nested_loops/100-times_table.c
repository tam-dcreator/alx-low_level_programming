#include "main.h"

/**
 *print_times_table - Function to display n times table
 *@n: Integer times table to be printed
 */
void print_times_table(int n)
{
	int num = 0, multi, prod;

	while (num <= n)
	{
		multi = 1;

		_putchar('0');
		while (multi <= n)
		{
			_putchar(',');
			_putchar(' ');
			prod = multi * num;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else if (prod > 99)
			{
				_putchar((prod / 100) + '0');
				_putchar((prod / 10 % 10) + '0');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
			++multi;
		}
		++num;
		_putchar('\n');
	}
}
