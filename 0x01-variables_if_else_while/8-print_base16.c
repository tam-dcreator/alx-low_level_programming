#include <stdio.h>

/**
 *main - Entry Point
 *
 *Description - Program that outputs all the numbers of base 16
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';
	char ch = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
