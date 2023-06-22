#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - Function that prints numbers
 *@separator: String to be printed between numbers
 *@n: Number of ints
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list plist;

	va_start(plist, n);

	for (i = 1; i <= n; i++)
	{
		num = va_arg(plist, int);
		printf("%d", num);
		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	printf("\n");

	va_end(plist);
}
