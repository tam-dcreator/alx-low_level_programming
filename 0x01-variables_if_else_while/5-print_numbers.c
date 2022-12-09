#include <stdio.h>

/**
 *main - Entry Point
 *
 *Description - Program to print all single digits of base 10
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
