#include <stdio.h>
#include <math.h>

/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */
void prime_number(void);

int main(void)
{
	prime_number();

	return (0);
}

/**
 *prime_number - Function to display the highest prime number of a 61282475143
 *
 *Return: The highest prime number
 */
void prime_number(void)
{
	long int num = 612852475143;
	int i, int_sqrt, ans;

	while (num % 2 == 0)
		num = num / 2;

	int_sqrt = ceil(sqrt(num));

	for (i = 3; i < int_sqrt; i += 2)
	{
		while (num % i == 0)
		{
			num = num / i;
			ans = num;
		}
	}

	if (num > 2)
		ans = num;
	printf("%d\n", ans);
}
