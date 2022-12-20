#include "main.h"

/**
 *print_rev - Function to print the reverse of a string
 *@s: String to be reversed
 *
 */
void print_rev(char *s)
{
	char *p;
	int count = 0;

	p = s;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	while (--count >= 0)
		_putchar(s[count]);
	_putchar('\n');
}
