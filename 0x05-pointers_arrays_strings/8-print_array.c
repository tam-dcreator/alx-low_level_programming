#include "main.h"

/**
 *print_array - Function to print n elements in an arrays
 *@a: The array
 *@n: The number of elements to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
