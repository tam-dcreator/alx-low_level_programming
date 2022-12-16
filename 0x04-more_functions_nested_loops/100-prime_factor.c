#include <stdio.h>
#include <math.h>

/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */
int prime_number(void);

int main(void)
{
	int result;

	result = prime_number();
	printf("%d\n", result);

	return (0);
}

/**
 *prime_number - Function to display the highest prime number of a 61282475143
 *
 *Return: The highest prime number
 */
int prime_number(void)
{
	long int num = 612852475143;
	int i, int_sqrt, count, ans;

	for ( ; num > 0; num--)
	{
		int_sqrt = ceil(sqrt(num));
		count = 0;

		for (i = 2; i < int_sqrt + 1; i++)
		{
			if (num % i == 0)
				count++;
		}
		if (count == 0)
		{
			ans = num;
			break;
		}
	}
	return (ans);
}
