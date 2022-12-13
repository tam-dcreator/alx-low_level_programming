#include <stdio.h>

/**
 *main - Entry Point
 *
 *Description - Program to output all possible combinations of a pair of two
 *digits number, without any repetition
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 99)
	{
		while (j <= 99)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	return (0);
}
