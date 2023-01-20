#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - Function that prints strings
 *@separator: String to be printed between string
 *@n: Number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;
	va_list list;

	va_start(list, n);

	for (i = 1; i <= n; i++)
	{
		c = va_arg(list, char*);

		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	printf("\n");
}
