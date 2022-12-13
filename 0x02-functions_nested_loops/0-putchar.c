#include "main.h"

/**
 *main - Entry point
 *
 *Description - A program to output putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
	char txt[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(txt[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
