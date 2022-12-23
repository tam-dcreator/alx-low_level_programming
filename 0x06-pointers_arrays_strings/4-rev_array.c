#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array
 * @a:Array of integers
 * @n:Number of elements in the array
 * Return:void
 */
void reverse_array(int *a, int n)
{
int i, c;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
	}
}
