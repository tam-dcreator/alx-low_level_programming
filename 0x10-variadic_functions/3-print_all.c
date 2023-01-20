#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - Function that prints strings
 *@format: List of arguments to be passed
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	float f;
	char const *str, *s;
	va_list args;

	str = format;
	va_start(args, format);
	while (*str != '\0')
	{
		switch (*str)
		{
		case 'c':
			i = va_arg(args, int);
			putchar(i);
			break;
		case 's':
			s = va_arg(args, char*);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
		}
		if (*(str + 1) != '\0' &&
		    (*str == 's' || *str == 'c' || *str == 'i' || *str == 'f'))
			printf(", ");
		str++;
	}
	va_end(args);
	printf("\n");
}
