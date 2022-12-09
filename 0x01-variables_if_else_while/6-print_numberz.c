#include <stdio.h>

/**
 *main - Entry Point
 *
 *Description - Program to print numbers from 0-10 using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
