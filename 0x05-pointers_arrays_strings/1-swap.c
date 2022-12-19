#include "main.h"

/**
 *swap_int - Function to swap the values of two integers
 *@a: First pointer integer
 *@b: Second pointer integer
 *
 */
void swap_int(int *a, int *b)
{
	int n, m;

	n = *a;
	m = *b;
	*a = m;
	*b = n;
}
