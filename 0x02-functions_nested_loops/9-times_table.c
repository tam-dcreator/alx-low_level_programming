#include "main.h"

/**
 *times_table - Function to list out the 9 times table
 *
 */
void times_table(void)
{
	int i = 0, j, output;

	while (i < 10)
	{
		j = 1;
		output = 0;

		_putchar('0');
		while (j < 10)
		{
			_putchar(',');
			_putchar(' ');
			output = i * j;
			if (output <= 9)
				_putchar(' ');
			else
				_putchar((output / 10) + '0');
			_putchar((output % 10) + '0');
			++j;
		}
		_putchar('\n');
		++i;
	}
}
