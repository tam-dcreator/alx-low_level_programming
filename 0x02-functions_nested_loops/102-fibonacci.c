#include <stdio.h>
#include "main.h"

/**
 *main -Entry Point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	print_fib50();
	return (0);
}

/**
 *print_fib50 - Function to display first 50 fibonacci number
 *
 */
void print_fib50(void)
{
	int a = 1, b = 2, i, result;

	for (i = 0; i < 50; i++)
	{
		printf("%d\n", a);
		result = a + b;
		a = b;
		b = result;
	}
}
