#include "main.h"

/**
 *more_numbers - Function to print numbers 0-14
 */
void more_numbers(void)
{
	int i = 0, num;

	while (i++ < 10)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
