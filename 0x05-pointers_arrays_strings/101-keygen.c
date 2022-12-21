#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, count, a;

	count = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		count += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - count) - '0' < 78)
		{
			a = 2772 - count - '0';
			count += a;
			putchar(a + '0');
			break;
		}
	}

	return (0);
}
