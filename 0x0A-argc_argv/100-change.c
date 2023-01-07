#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry Point
 *@argc: Argument count
 *@argv: Argument Vectors
 *
 *Return: number of coins or 1
 */
int main(int argc, char *argv[])
{
	int i, n, change = 0, cum_change = 0;
	int values[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (values[i] <= n)
		{
			change = n / values[i];
			cum_change += change;

			if (n % values[i] == 0)
			{
				printf("%d\n", cum_change);
				return (0);
			}
			n = n - (change * values[i]);
		}
	}

	return (0);
}
