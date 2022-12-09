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
	fwrite("[ERROR] : and that piece of art is useful\" - Dora Korpar, 2015-10-19 \n", 73, 1, stderr);
	return (1);
}
