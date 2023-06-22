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
	int (*operator)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(num1, num2));

	return (0);
}
