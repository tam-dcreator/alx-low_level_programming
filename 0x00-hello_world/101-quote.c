#include <stdio.h>

/**
 *main - Entry point
 *
 *
 *Description - Printing to standard error
 *Return: Always 1 (error)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 73);
	return (1);
}
