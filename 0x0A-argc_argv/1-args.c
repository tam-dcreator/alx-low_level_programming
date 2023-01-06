#include <stdio.h>

/**
 *main - Entry Point
 *@argc: Argument count
 *@argv: Argument vector
 *
 *Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
