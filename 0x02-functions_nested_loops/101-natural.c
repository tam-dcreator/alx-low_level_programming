#include <stdio.h>
#include "main.h"

/**
 *natnum - Function to sum multiples of 3 and 5
 */
void natnum(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if (!(i % 15))
			sum += i;
		else if (!(i % 5))
			sum += i;
		else if (!(i % 3))
			sum += i;
	}
	printf("%d\n", sum);
}
