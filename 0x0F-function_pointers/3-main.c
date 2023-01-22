#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry Point to calulator program
 *@argc: Argument counter
 *@argv: Argument vector
 *
 *Return: Always success (0)
 */
int main(int argc, char *argv[])
{
	char s;
	int result, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = argv[2][0];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (s == '+' || s == '-' || s == '*' || s == '/' || s == '%')
	{
		if ((s == '/' || s == '%') && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
