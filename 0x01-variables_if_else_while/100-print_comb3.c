#include <stdio.h>

/**
 *main - Entry Point
 *
 *Description - Program to output different combinations of two digits
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int b = '1';

	while (a <= '8')
	{
		while (b <= '9')
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		b = '1';
		a++;
	}
	putchar('\n');
	return (0);
}
