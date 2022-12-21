#include "main.h"

/**
 *puts_half - Function to print half a string
 *@str: String to be evaluated
 *
 */
void puts_half(char *str)
{
	int a = 0, len = 0, i, n;

	while (*(str + a++) != '\0')
		len++;

	n = len / 2;

	for (i = 0; i < n; i++)
	{
		if (len % 2 == 0)
			_putchar(str[n + i]);
		else
			_putchar(str[n + 1 + i]);
	}
	_putchar('\n');
}
