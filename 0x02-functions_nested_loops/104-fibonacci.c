#include <stdio.h>
#include "main.h"

/**
 *main -Entry Point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	print_fib98();
	return (0);
}

/**
 *print_fib98 - Function to display first 98 fibonacci number
 *
 */
void print_fib98(void)
{
	unsigned long int a = 1, b = 2, result;
	int i;

	for (i = 0; i < 98; i++)
	{
		printf("%lu", a);
		if (i != 97)
			printf(", ");
		result = a + b;
		a = b;
		b = result;
	}
	printf("\n");
}
