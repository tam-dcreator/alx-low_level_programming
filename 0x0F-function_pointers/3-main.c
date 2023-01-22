#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - Entry Point to calulator program
 *@argc: Argument counter
 *@argv: Argument vector
 *
 *Return: On success (0)
 *On error 98 for not enough or too many arguments
 *On error 99 if operator isn't supported
 *On error 100, if user divides by 0
 */
int main(int argc, char *argv[])
{
	char s;
	int result, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	s = argv[2][0];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (s == '+' || s == '-' || s == '*' || s == '/' || s == '%')
	{
		if ((s == '/' || s == '%') && num2 == 0)
		{
			printf("Error\n");
			return (100);
		}
	}
	else
	{
		printf("Error\n");
		return (99);
	}

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
