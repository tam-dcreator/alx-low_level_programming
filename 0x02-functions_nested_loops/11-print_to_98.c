#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - Function to print all natural numbers from n to 98
 *@n: integer to be evaluated
 *
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else
		for (count = n; count < 98; ++count)
			printf("%d, ", count);
	printf("98\n");
}
