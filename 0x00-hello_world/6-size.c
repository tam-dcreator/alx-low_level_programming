#include <stdio.h>

/**
 *main - Entry point
 *
 *
 *Description - Prints out the sizes of the different varaible types
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;
	float f;
	long int l;
	long long int k;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
