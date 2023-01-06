#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry Point
 *@argc: Argument count
 *@argv: Argument vector
 *
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");

	return (0);
}
