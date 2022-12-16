#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; ++i)
	{
		if (i % 15 == 0)
			printf("Fizzbuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
