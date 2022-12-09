#include <stdio.h>

/**
 *main - Entry Point
 *
 *Description - Prints the alphabet in lowercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}
	return (0);
}
