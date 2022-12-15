#include <stdio.h>
#include "main.h"

/**
 *main -Entry Point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	print_fib_even();
	return (0);
}

/**
 *print_fib_even - Function to display even fibonacci number
 *
 */
void print_fib_even(void)
{
	unsigned long int a = 1, b = 2, result, sum;
	int i;

	for (i = 0; i < 36; i++)
	{
		if (!(a % 2))
			sum += a;
		result = a + b;
		a = b;
		b = result;
	}
	printf("%lu\n", sum);
}
