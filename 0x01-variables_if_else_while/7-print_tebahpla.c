#include <stdio.h>

/**
 *main - Entry Point
 *
 *Description - Program that prints lowercase letters in reverse
 *Return: Always 0 (Success)
 */
int main(void)
{
	char albet = 'z';

	while (albet >= 'a')
	{
		putchar(albet);
		albet--;
	}
	putchar('\n');
	return (0);
}
