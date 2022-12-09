#include <stdio.h>

/**
 *main - Entry Point
 *
 *Description - Program to output all possible combinations of single no
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
