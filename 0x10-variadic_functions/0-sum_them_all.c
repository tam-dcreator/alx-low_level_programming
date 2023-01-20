#include <stdarg.h>

/**
 *sum_them_all - Functio that sums all its parameters
 *@n: first parameter
 *
 *Return: O if n==0 or sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (n);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
