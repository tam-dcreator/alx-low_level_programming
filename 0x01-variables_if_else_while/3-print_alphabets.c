#include <stdio.h>

/**
 *main - Entry Point
 *
 *Description - Prints the alphabet in lowercase and uppercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char cap_ch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cap_ch <= 'Z')
	{
		putchar(cap_ch);
		cap_ch++;
	}
	putchar('\n');
	return (0);
}
