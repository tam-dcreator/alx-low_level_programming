#include "main.h"

/**
 *jack_bauer - Function to list the every minute of the day
 *
 */
void jack_bauer(void)
{
	int hr = 00, min;

	while (hr < 24)
	{
		min = 00;

		while (min < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
