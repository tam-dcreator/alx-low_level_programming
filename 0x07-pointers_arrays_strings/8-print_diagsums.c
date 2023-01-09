#include "main.h"

/**
 *print_diagsums - Function that prints the sum of the two diagonals of a
 *square matrix
 *@a: 2D matrix initialised as a pointer
 *@size: Size of the array
 *
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += a[i * size + i];

	for (i = 1; i <= size; i++)
		sum2 += a[i * size - i];

	printf("%d, %d\n", sum1, sum2);
}
