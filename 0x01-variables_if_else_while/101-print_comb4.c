#include <stdio.h>

/**
 *main - Entry Point
 *
 *Description - Program to output different combinations of three digits
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int b = '1';
	int c = '2';

	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				if ((a < b) && (b < c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			c = '1';
			b++;
		}
		b = '1';
		a++;
	}
	putchar('\n');
	return (0);
}
